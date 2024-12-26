// December 26, 2024 - using multiline with template literals (` `)

1. Conference Speaker Announcement
/* Problem: Write an announcement for a conference speaker. Include the speaker’s name, the session title, the date, and the time.

Expected Output: 
Conference Speaker Announcement

Speaker Name: Dr. Emily Rose
Session Title: The Future of Artificial Intelligence
Date: August 10, 2025
Time: 2:00 PM

Join us in the main hall for an inspiring talk!
*/
    let name = "Dr. Emily Rose", title = "The Future of Artificial Intelligence", date = "August 10,2025", time = "2:00 PM";
    
console.log(`Speaker Name: ${name}
Session Title: ${title}
Date: ${date}
Time: ${time}

Join us in the main hall for an inspring talk!`);
    
    
    
    
2. Restaurant Receipt
/* Problem: Display a restaurant bill receipt. Include the customer’s name, table number, total amount, and payment method.

Expected Output: 
Restaurant Receipt

Customer Name: Mia Lopez
Table Number: 7
Total Amount: $67.45
Payment Method: Credit Card

Thank you for dining with us!
*/
    let name1 = "Mia Lopez", number = 7, amount = 67.45, method = "Credit Card";
    
    console.log(`Restaurant Receipt

Customer Name: ${name1}
Table Number: ${number}
Total Amount: $${amount}
Payment Method: ${method}

Thank you for dining with us!`);
    
    
    
    
3. Sports Tournament Resgistration
/* Problem: Print the registration details for a sports tournament. Include the participant's name, sport, team name, and match date.

Expected Output: 
Tournament Registration

Participant Name: Oliver Grant
Sport: Basketball
Team Name: The Dunk Kings
Match Date: June 18, 2025

Good luck in the tournament!
*/
    let pname = "Oliver Grand", sport = "Basketball", tname = "The Dunk Kings", mdate = "June 18, 2025";
    
console.log(`Tournament Registration

Participant Name: ${pname}
Sport: ${sport}
Team Name: ${tname}
Match Date: ${mdate}
    
Good luck in the tournament!`);
    
    
    
    
4. Movie Reservation Details
/* Problem: Display the reservation details for a movie ticket. Include the customer's name, the movie title, the showtime, and the seat number.

Expected Output: 
Customer Name: Emily Carter
Movie Title: The Lost Galaxy
Showtime: 7:30 PM
Seat Number: D15

Enjoy the movie!
*/
    let cname = "Emily Carter", mtitle = "The Lost Galaxy", showtime = "7:30 PM", snum = "D15";
    
console.log(`Cutomer Name: ${cname}
Movie Title: ${mtitle}
Showtime: ${showtime}
Seat Number: ${snum}

Enjoy the movie!`);
    
    
    
    
5. Online Course Enrollment Details
/* Problem: Display the enrollment details for an online course. Include the student's name, course title, enrollment date, 
and the instructor's name.

Expected Output: 
Course Enrollment Confirmation

Student Name: Sophia Turner
Course Title: Introduction to Data Science
Enrollment Date: March 1, 2025
Instructor: Dr. James Rivera

Welcome to the course!
*/
    let sname = "Sophia Turner", ctitle = "Introduction to Data Science", edate = "March 1, 2025",
    instructor = "Dr. James Rivera";

console.log(`Course Enrollment Confirmation

Student Name: ${sname}
Course Title: ${ctitle}
Enrollment Date: ${edate}
Instructor: ${instructor}

Welcome to the course!`);
