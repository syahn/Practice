// 1. Reflection

// - I solved it in quiet ugly way. And it cannot solve every case other than test cases. 


// 2. Problem

// Convert a date range consisting of two dates formatted as YYYY-MM-DD into a more
// readable format.
//
// The friendly display should use month names instead of numbers and ordinal dates
// instead of cardinal (1st instead of 1).
//
// Do not display information that is redundant or that can be inferred by the user:
// if the date range ends in less than a year from when it begins, do not display the ending year.
//
// Additionally, if the date range begins in the current year (i.e. it is currently
//   the year 2016) and ends within one year, the year should not be displayed
//   at the beginning of the friendly range.
//
// If the range ends in the same month that it begins, do not display the ending
// year or month.
//
// Examples:
//
// makeFriendlyDates(["2016-07-01", "2016-07-04"]) should return ["July 1st","4th"]
//
// makeFriendlyDates(["2016-07-01", "2018-07-04"]) should return ["July 1st, 2016", "July 4th, 2018"].

// 3. Initial solution

// jshint esversion: 6
function makeFriendlyDates([a, b]) {
  const monthName = ['January', 'February', 'March', 'April', 'May', 'June', 'July', 'August', 'September', 'October', 'November', 'December'],
        ordinal  = {'1': 'st', '21': 'st', '31': 'st', '2': 'nd', '22': 'nd', '3': 'rd', '23': 'rd'};

  const first = a.split('-'),
        second = b.split('-'),
        firstYear = parseInt(first[0]),
        secondYear = parseInt(second[0]),
        firstMonth = parseInt(first[1]),
        secondMonth = parseInt(second[1]),
        firstDay = parseInt(first[2]),
        secondDay = parseInt(second[2]),
        currentYear = 2016;

  let firstRet, secondRet ;

    firstRet = monthName[firstMonth-1] +
               ' ' +
               firstDay +
               (firstDay in ordinal ? ordinal[firstDay] : 'th') +
               ((firstYear == currentYear && firstYear == secondYear) || (secondYear - firstYear == 1 &&  secondMonth - firstMonth < 0) ? '' : ', ' + firstYear);
    if(firstYear == secondYear && firstMonth == secondMonth && firstDay == secondDay) return [firstRet];
    secondRet = (firstMonth != secondMonth || (secondYear - firstYear == 1 && firstMonth == secondMonth) ? monthName[secondMonth-1] + ' ': '') +
                secondDay +
                (secondDay in ordinal ? ordinal[secondDay] : 'th') +
                (firstYear == secondYear || (secondYear - firstYear == 1 &&  secondMonth - firstMonth <= 0 && firstDay != secondDay) ? '' : ', ' + secondYear);

  return [firstRet, secondRet];
}


// 4. Improved solution

function makeFriendlyDates(str) {

  var months = ['January', 'February', 'March', 'April', 'May', 'June', 'July', 'August', 'September', 'October', 'November', 'December'];

  // Convert a YYYY-MM-DD string into a date object.
  function convertDate(str) {
    // Split the dates to work independently.
    var dateStr = str.split('-');

    // Force the dates into Universal time to avoid issues due to timezones.
    return (new Date(Date.UTC(dateStr[0], dateStr[1] - 1, dateStr[2])));

  }

  // Handles the case of the day's endings.
  function dateEnding(val) {
    switch (val) {
      case 1:
      case 21:
      case 31:
        return val + 'st';
      case 2:
      case 22:
        return val + 'nd';
      case 3:
      case 23:
        return val + 'rd';
      default:
        return val + 'th';
    }
  }

  // Checks for the real difference in months to avoid errors
  function monthDiff(date1, date2) {
    var month2 = date2.getUTCFullYear() * 12 + date2.getUTCMonth();
    var month1 = date1.getUTCFullYear() * 12 + date1.getUTCMonth();
    return month2 - month1;
  }

  //day diff
  function dayDiff(date1, date2) {
    if(date2.getUTCMonth() === date1.getUTCMonth()){
      return date1.getUTCDate()-date2.getUTCDate();
    }
    return 0;
  }

  // Get's the right month string.
  function getMonth(date) {
    return months[date.getUTCMonth()];
  }

  function displayDate() {

    // Handles same day
    if (date2.getTime() - date1.getTime() === 0) {
      return [getMonth(date1) + ' ' + dateEnding(date1.getUTCDate()) + ', ' + date1.getUTCFullYear()];
    }

    // Handles same month
    if (date1.getUTCMonth() === date2.getUTCMonth() && date1.getUTCFullYear() === date2.getUTCFullYear()) {
      return [getMonth(date1) + ' ' + dateEnding(date1.getUTCDate()), dateEnding(date2.getUTCDate())];
    }

    // Handles more than a month of difference, but less than 12 months and different year
    if (monthDiff(date1, date2) < 12 && date1.getUTCFullYear() !== date2.getUTCFullYear() ) {
      return [getMonth(date1) + ' ' + dateEnding(date1.getUTCDate()), getMonth(date2) + ' ' + dateEnding(date2.getUTCDate())];
    }

    // Handles same month but different year
    if (monthDiff(date1, date2) <= 12 && dayDiff(date1, date2)>0) {
      return [getMonth(date1) + ' ' + dateEnding(date1.getUTCDate())+', '+date1.getUTCFullYear(), getMonth(date2) + ' ' + dateEnding(date2.getUTCDate())];
    }

    // Handles more than a month of difference, but less than 12 months and same year
    if (monthDiff(date1, date2) < 12) {
      return [getMonth(date1) + ' ' + dateEnding(date1.getUTCDate())+', '+date1.getUTCFullYear(), getMonth(date2) + ' ' + dateEnding(date2.getUTCDate())];
    }

    // Handles cases with more than 12 months apart.
    return [getMonth(date1) + ' ' + dateEnding(date1.getUTCDate()) + ', ' + date1.getUTCFullYear(), getMonth(date2) + ' ' + dateEnding(date2.getUTCDate()) + ', ' + date2.getUTCFullYear()];
  }

  var date1 = convertDate(str[0]);
  var date2 = convertDate(str[1]);

  return displayDate();

}

// test here
makeFriendlyDates(['2016-07-01', '2016-07-04']);
