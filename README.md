# Bus Ticket Booking System in C

A console-based **Bus Ticket Booking System** developed using the C programming language. The project provides a menu-driven interface for user sign-up/login, selecting a bus, booking seats, calculating ticket fares, printing a receipt, cancelling a booking, and checking bus status.

## Project Overview

The program simulates a basic bus reservation workflow through a terminal. It stores user sign-up details in a local text file (`demo.txt`) and uses an array to track the availability of 21 seats while the program is running.

## Features

- **Sign up:** Collects a user's name, email, phone number, and password.
- **Login screen:** Prompts for an email and password.
- **Bus selection:** Displays sample bus names:
  - Sri Mathi
  - SETC Bus
  - Ragul Dragon Bus
- **Seat selection:** Displays a bus seat layout and lets users select a seat from 1 to 21.
- **Seat availability:** Shows whether each seat is available or booked during the current run.
- **Bus types and fares:**
  - AC: ₹500 per seat
  - Non-AC: ₹300 per seat
  - Sleeper coach: ₹400 per seat
- **Receipt:** Displays fare information, a GST amount, and the final bill amount.
- **Cancellation:** Allows a user to enter a seat number to cancel.
- **Bus status:** Displays a simple bus-status message for Salem New Bus Stand.
- **Date and time display:** Uses the system clock to display the current date and time.

## Technologies Used

- **Language:** C
- **Standard libraries:** `stdio.h`, `string.h`, `stdlib.h`, and `time.h`
- **File handling:** Text file (`demo.txt`) for sign-up details
- **Data structures:** `struct` for user details and an array for seat status

## Requirements

- A C compiler, such as GCC or Clang
- A terminal or command prompt
- Windows users can use GCC through MinGW-w64 or an IDE that supports C

## How to Compile and Run

### Windows (GCC / MinGW)

1. Save the source file as `bus_ticket.c`.
2. Open Command Prompt or a terminal in the folder containing the file.
3. Compile the program:

   ```bash
   gcc "BUS TICKET PROJECT (1).c" -o bus_ticket
   ```

4. Run it:

   ```bash
   bus_ticket.exe
   ```

### Linux

Compile the source file:

```bash
gcc "BUS TICKET PROJECT (1).c" -o bus_ticket
```

Run the program:

```bash
./bus_ticket
```

> **Note:** The source code includes `system("chcp 65001")`, which is Windows-specific. On Linux, remove that line or make it conditional before compiling/running.

## How to Use

1. Start the program.
2. Choose **1** to log in or **2** to sign up.
3. If signing up, enter the requested details. The program writes them to `demo.txt`.
4. Follow the displayed menu:
   - `1` – Ticket booking
   - `2` – Cancel booking
   - `3` – Check bus status
   - `0` – Exit
5. For booking, enter the origin, destination, bus name, seat number, bus type, travel date, and departure time when prompted.
6. Review the displayed receipt and fare.

## Fare Details

| Bus type | Fare per seat |
|---|---:|
| AC (`ac`) | ₹500 |
| Non-AC (`non_ac`) | ₹300 |
| Sleeper coach (`sleeper_coach`) | ₹400 |

The current code adds a fixed GST amount of ₹180 to the displayed fare. Verify the intended tax calculation before using this for real bookings.

## Project Structure

```text
.
├── BUS TICKET PROJECT (1).c   # C source code
├── README.md                  # Project documentation
└── demo.txt                   # Created when sign-up details are saved
```

`demo.txt` is created when the sign-up function runs successfully. It contains the name, email, phone number, and password entered during sign-up.

## Current Limitations

This is an educational/demo project. The current implementation has several limitations to address before real-world use:

- Login prompts for credentials but does not independently load and verify saved users from `demo.txt`.
- Passwords are stored as plain text in `demo.txt`; this is not safe for real user accounts.
- Seat status is held in memory, so bookings are not preserved after the program closes.
- Seat availability is not stored separately for each bus, route, or travel date.
- The bus-status function displays a fixed message rather than live tracking information.
- Input handling and menu navigation need additional validation and testing.
- Cancellation and fare/receipt calculations should be reviewed to ensure they correctly reflect the cancelled seat and refund.
- The source code has a few input-handling and control-flow issues that may affect the user experience.

## Possible Improvements

- Store users and reservations in a structured file or database.
- Verify login credentials securely and never save plain-text passwords.
- Save bookings persistently and associate seats with a bus, route, and travel date.
- Add passenger details and a unique booking ID.
- Calculate fare, tax, cancellation charges, and refunds consistently.
- Validate dates, times, bus names, and all user input.
- Replace the fixed bus-status message with a real status source.
- Improve the menu loop and provide clear confirmation/error messages.

## Authors

**Sudharson V**

## Disclaimer

This project is intended for learning and demonstration purposes. It is not a production-ready ticketing system and should not be used to handle real passenger information or payments without substantial security, validation, and persistence improvements.
