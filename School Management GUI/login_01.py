import tkinter as tk
from tkinter import messagebox,OptionMenu,scrolledtext,filedialog,font,StringVar,ttk
from PIL import Image, ImageTk
import pymysql
from datetime import datetime, timedelta
from tkcalendar import Calendar
import webbrowser
global entry_id,entry_password,entry_class
def login(): 
    stid = entry_id.get()
    password = entry_password.get()
    classs = entry_class.get()
    
    if stid == "1" and password == "master" and classs =="12":
        create_scrollable_page()

    elif stid=="2" and password == "master" and classs == "12":
        create_scrollable_page()        
    else:
        messagebox.showerror("Login Failed", "Invalid credentials")
# Database connection settings
host = 'localhost'
user = 'root'  # Use 'root' as the username
password = 'password'  # Your password
database = 'school_app'  # Your database name
# Create a connection to the database
def create_connection():
    try:
        connection = pymysql.connect(host=host,
         user=user, 
         password=password, 
         database=database
        )
        return connection
    except pymysql.Error as e:
        messagebox.showerror("Error", f"Failed to connect to database: {e}")
        return None
# Connect to the database
conn = pymysql.connect(host=host, user=user, password=password, database=database)
# Create a cursor object
cursor = conn.cursor()
# Execute SQL query to fetch the due bill amount
cursor.execute("SELECT due_bill FROM jayesh")
# Fetch the result
result = cursor.fetchone()
# Close the cursor and connection
cursor.close()
conn.close()
# Get the due bill amount from the result
due_bill = result[0]
#-->acc payment
def pay():
    root = tk.Tk()
    root.title("payment methods")
    root.geometry("1280x720")
    root.config(bg="black")

    frame_acc = tk.Frame(root, bg="chocolate")
    frame_acc.place(relx=0.0, rely=0.00)

    canvas = tk.Canvas(root, width=900, height=600, bg="chocolate")
    canvas.pack()
    canvas.place(x=200,y=20)

    button_esewa = tk.Button(root, text="Esewa", font=("ink free", 20), width=55, height=2, bg="greenyellow", fg="black")
    button_esewa.pack()
    button_esewa.place(x=230, y=80)

# Khalti button
    button_khalti = tk.Button(root, text="Khalti", font=("ink free", 20), width=55, height=2, bg="powderblue", fg="black")
    button_khalti.pack()
    button_khalti.place(x=230, y=180)

# M Banking button
    button_mbank = tk.Button(root, text="M Banking", font=("ink free", 20), width=55, height=2, bg="greenyellow", fg="black")
    button_mbank.pack()
    button_mbank.place(x=230, y=280)

    label_bank = tk.Label(root, text="Banking Options:" , font=("Algerian", 25),fg="black",  bg="chocolate")
    label_bank.pack()
    label_bank.place(x=500,y=30)

    frame_arr = tk.Frame(root, bg="chocolate")
    frame_arr.place(relx=0.0, rely=0.00)

    back_icon = tk.Button(frame_arr, text="⬅️", bg='chocolate', fg='white', font=('ink free', 16) , command=root.destroy)
    back_icon.pack(side=tk.LEFT)
#-->account
def account():
    root = tk.Tk()
    root.title("Account Section")
    root.geometry("1280x720")   
    root.config(bg="black")
    frame_acc = tk.Frame(root, bg="chocolate")
    frame_acc.place(relx=0.0, rely=0.00)
    canvas = tk.Canvas(root, width=300, height=39, bg="chocolate")
    canvas.pack()
    canvas.place(x=1000,y=0)

    frame_detail = tk.Frame(root, bg="chocolate")
    frame_detail.place(relx=0.1, rely=0.1)
    canvas = tk.Canvas(root, width=800, height=300, bg="yellowgreen")
    canvas.pack()
    canvas.place(x=250,y=60)

    label_name = tk.Label(root, text="Name  ", font=("ink free", 29), width=10, fg="black",bg="yellowgreen")
    label_name.pack()
    label_name.place(x=270,y=80)
    label_class = tk.Label(root, text="Class  ", font=("ink free", 29), width=10, fg="black",bg="yellowgreen")
    label_class.pack()
    label_class.place(x=270,y=140)
    label_sec = tk.Label(root, text="Section ", font=("ink free", 29), width=10, fg="black",bg="yellowgreen")
    label_sec.pack()
    label_sec.place(x=280,y=200)
    label_total= tk.Label(root, text="Total amount  ", font=("ink free", 29), width=15, fg="black",bg="yellowgreen")
    label_total.pack()
    label_total.place(x=290,y=270)
    label_nameinfo = tk.Label(root, text="Jayesh Somani  ", font=("ink free", 29), width=15, fg="black",bg="yellowgreen")
    label_nameinfo.pack()
    label_nameinfo.place(x=650,y=80)
    label_classinfo = tk.Label(root, text="12 ", font=("ink free", 29), width=10, fg="black",bg="yellowgreen")
    label_classinfo.pack()
    label_classinfo.place(x=700,y=140)
    label_secinfo = tk.Label(root, text="A1 ", font=("ink free", 29), width=10, fg="black",bg="yellowgreen")
    label_secinfo.pack()
    label_secinfo.place(x=700,y=200)
    label_totalamt= tk.Label(root, text=f" {due_bill}  ", font=("ink free", 29), width=15, fg="black",bg="yellowgreen")
    label_totalamt.pack()
    label_totalamt.place(x=650,y=270)
    label_menu = tk.Label(root, text="Account  ", font=("algerian", 25), width=56, fg="white", bg="chocolate")
    label_menu.pack(padx=200)
    label_menu.place(x=59,y=0)
    # Left icon (back arrow)
    back_icon = tk.Button(frame_acc, text="⬅️", bg='chocolate', fg='white', font=('ink free', 16) ,
                            command=root.destroy)
    back_icon.pack(side=tk.LEFT, padx=10)
    button_pay = tk.Button(root, text="PAY", font=("ink free", 25) , command=pay,width=10, height = 1 ,bg="powderblue",fg="black")
    button_pay.pack()
    button_pay.place(x=860,y=510)
    root.mainloop()
#-->assignment
def assignment():
    root = tk.Tk()
    root.title("Assignments")
    root.geometry("1920x1080")  
    root.configure(bg="black")  
    # Create the header frame
    header_frame = tk.Frame(root, bg="chocolate", pady=10)
    header_frame.pack(fill=tk.X)

    frame_menu = tk.Frame(root, bg="chocolate")
    frame_menu.place(relx=0.0, rely=0.00)
    # back_icon
    back_icon = tk.Button(frame_menu, text="⬅️", bg='chocolate', fg='white', font=('ink free', 16), command=root.destroy)
    back_icon.pack(side=tk.LEFT, padx=10,pady=6)
    # Add the title
    title_label = tk.Label(header_frame, text="Assignments", bg="chocolate", fg="white", font=("ink free", 19, "bold"))
    title_label.pack(side=tk.LEFT, expand=True)
    # Create the content frame
    content_frame = tk.Frame(root, bg="black", padx=20, pady=20)
    content_frame.pack(expand=True, fill=tk.BOTH)
    # Sample assignment data
    assignments = [
        {"subject": "Math", "title": "Algebra Homework", "due_date": "2024-10-30", "details": "Solve exercises 1-20 on page 42."},
        {"subject": "Science", "title": "Lab Report", "due_date": "2024-11-02", "details": "Submit your lab report on the chemical reaction experiment."},
        {"subject": "English", "title": "Essay", "due_date": "2024-11-05", "details": "Write a 500-word essay on your favorite book."},
        {"subject": "History", "title": "Project", "due_date": "2024-11-10", "details": "Create a presentation on World War II."},
        {"subject": "Computer", "title": "To read the chapter-4", "due_date": "2024-11-10", "details": "read the subtopic nicely."},
        {"subject": "Political Science", "title": "Painting Assignment", "due_date": "2024-11-12", "details": "Create a painting inspired by nature."},
    ]
    # Create a scrolled text area to display assignments
    assignment_display = scrolledtext.ScrolledText(content_frame, wrap=tk.WORD, width=40, height=20, bg="white")
    assignment_display.pack(expand=True, fill=tk.BOTH)
    try:
       # Populate the scrolled text area with assignment data
       for assignment in assignments:
        assignment_display.insert(tk.END, f"Subject: {assignment['subject']}\n")
        assignment_display.insert(tk.END, f"Title: {assignment['title']}\n")
        assignment_display.insert(tk.END, f"Due Date: {assignment['due_date']}\n")
        assignment_display.insert(tk.END, f"Details: {assignment['details']}\n")
        assignment_display.insert(tk.END, "-" * 40 + "\n")  # Separator line
    except OverflowError as of:
      print("overflow error is ",of)
    # Start the Tkinter event loop
    root.mainloop()
#reading material
def read():
    root = tk.Tk()
    root.title("Reading Materials")
    root.geometry("1920x1080")
    root.configure(bg="white")
    header_frame = tk.Frame(root, bg="chocolate", pady=10)
    header_frame.pack(fill=tk.X)
    frame_menu = tk.Frame(root, bg="chocolate")
    frame_menu.place(relx=0.0, rely=0.00)
    back_icon = tk.Button(frame_menu, text="⬅️", bg='chocolate', fg='white', font=('Arial', 16), command=root.destroy)
    back_icon.pack(side=tk.LEFT, padx=10, pady=6)

    title_label = tk.Label(header_frame, text="Reading Materials", bg="chocolate", fg="white", font=("Arial", 19, "bold"))
    title_label.pack(side=tk.LEFT, expand=True)
    content_frame = tk.Frame(root, bg="black", padx=20, pady=20)
    content_frame.pack(expand=True, fill=tk.BOTH)
    # Folder links for different subjects
    folder_base_path = "C:\\Users\\Gateway\\Desktop\\class_{class_number}_{subject}"
    def show_link(event):
        selected_subject = subject_combobox.get()
        selected_class = class_combobox.get()

        if selected_subject and selected_class:
            class_number = selected_class.split()[-1]  # Extract class number from the selection
            folder_link = folder_base_path.format(class_number=class_number, subject=selected_subject)
            pdf_display_label.config(text=folder_link)  # Display the folder path
            retrieve_button.config(state="active")  # Enable the retrieve button
    subject_combobox = ttk.Combobox(content_frame, state="readonly", font=("Arial", 12))
    subject_combobox.pack(pady=10)
    class_combobox = ttk.Combobox(content_frame, values=[f"Class {i}" for i in range(1, 13)], state="readonly", font=("Arial", 12))
    class_combobox.set("Select Class")
    class_combobox.pack(pady=10)
    def update_subjects(event):
        selected_class = class_combobox.get()
        if selected_class:
            if selected_class in [f"Class {i}" for i in range(1, 5)]:  # Classes 1-4
                subjects = ["Math", "Science", "English", "EVS"]
            elif selected_class in [f"Class {i}" for i in range(5, 8)]:  # Classes 5-7
                subjects = ["Math", "Science", "English", "Social Studies", "Computer"]
            elif selected_class in [f"Class {i}" for i in range(8, 11)]:  # Classes 8-10
                subjects = ["Math", "Science", "English", "Social Studies", "Computer", "EVS"]
            else:  # Classes 11-12
                subjects = ["Math", "Science", "English", "Computer"] 
            subject_combobox['values'] = subjects
            subject_combobox.set("Select Subject")
        else:
            subject_combobox['values'] = []
    class_combobox.bind("<<ComboboxSelected>>", update_subjects)
    subject_combobox.bind("<<ComboboxSelected>>", show_link)
    pdf_display_label = tk.Label(content_frame, text="", bg="black", fg="white", font=("Arial", 12), wraplength=400)
    pdf_display_label.pack(pady=20)
    def retrieve_pdf():
        folder_path = pdf_display_label.cget("text")
        if folder_path:
            # Open the folder in the file explorer
            webbrowser.open(f"file:///{folder_path}")  # This opens the folder path in file explorer
        else:
            messagebox.showwarning("No Folder", "Please select a subject and class to see the folder.")

    retrieve_button = tk.Button(content_frame, text="Retrieve Folder", command=retrieve_pdf, state="disabled")
    retrieve_button.pack(pady=10)
    root.mainloop()
global entry_ids , entry_classs
def get_student_results(student_id, student_class, terminal):
    """Fetch student results from the database."""
    entry_ids = entry_id.get()  
    entry_classs = entry_class.get()  
    try:
        connection = pymysql.connect(
            host='localhost',  # Replace with your database host
            user='root',  # Replace with your database username
            password='password',  # Replace with your database password
            database='school_app',  # Database name
        )
        # Construct the table name based on class and terminal
        results_table = f"{student_class}_{terminal}"  # e.g., class12_firstterminal
        with connection.cursor() as cursor:
            # Fetch all columns for the given student ID
            sql_query = f"SELECT * FROM `{results_table}` WHERE idno = %s"
            cursor.execute(sql_query, (student_id,))
            result = cursor.fetchone()

            if result:
                # Assuming the first column is student_id and the rest are marks
                columns = [column[0] for column in cursor.description]  # Get column names
                results_dict = {columns[i]: result[i] for i in range(1, len(result))}  # Exclude student_id
                return results_dict  # Return a dictionary of results
    except pymysql.MySQLError as e:
        messagebox.showerror("Database Error", str(e))
    finally:
        connection.close()

    return None  # Return None if no result found

def show_result(selected_terminal):
    """Display results based on selected terminal."""
    entry_ids = entry_id.get()  # Replace this with the actual value from your login page
    entry_classs = entry_class.get()
    results = get_student_results(entry_ids, entry_classs, selected_terminal)

    # Clear the text widget
    result_display.delete(1.0, tk.END)

    # Display the results
    if results:
        result_text = f"Results for Student ID :\n"
        result_text += "\n".join(f"{subject}: {mark}" for subject, mark in results.items())
        result_display.insert(tk.END, result_text)
    else:
        result_display.insert(tk.END, "No results found for this student ID and terminal.")
#--->report
def report():
    """Create the report page window."""
    report_window = tk.Tk()  # Create a new window
    report_window.title("Student Report")
    report_window.geometry("1920x1080")
    report_window.config(bg="black")
    frame_acc = tk.Frame(report_window, bg="chocolate")
    frame_acc.place(relx=0.0, rely=0.00)
    canvas = tk.Canvas(report_window, width=700, height=39, bg="chocolate")
    canvas.pack()
    canvas.place(x=1000, y=0)
    label_menu = tk.Label(report_window, text="Report Card", font=("arial", 25), width=70, fg="white", bg="chocolate")
    label_menu.pack(padx=200)
    label_menu.place(x=59, y=0)
    # Label to display the result
    global result_display
    result_display = tk.Text(report_window, height=10, width=50, bg="yellowgreen", font=("arial", 25))
    result_display.pack(pady=20)
    result_display.place(x=200,y=200)
    # Left icon (back arrow)
    back_icon = tk.Button(frame_acc, text="⬅️", bg='chocolate', fg='white', font=('arial', 16), command=report_window.destroy)
    back_icon.pack(side=tk.LEFT, padx=10)
    # Label for report title
    title_label = tk.Label(report_window, text="Select Terminal to View Results", font=("ink free", 20))
    title_label.pack(pady=10)
    title_label.place(x=270,y=100)
    # Dropdown menu for terminal selection
    global terminal_var
    terminal_var = StringVar(report_window)
    terminal_var.set("Select Terminal")  # Default value

    # List of terminals (you can modify this as needed)
    terminals = ["firstterminal", "secondterminal"]  # Add more terminals if needed
    terminal_menu = OptionMenu(report_window, terminal_var, *terminals, command=show_result)
    terminal_menu.pack(pady=20)
    terminal_menu.config(width=50)
    terminal_menu.place(x=700,y=100)
    report_window.mainloop()
#-->feedback
def feedback():
    root = tk.Tk()
    root.title("Login Page")
    # Set the size of the window
    root.geometry("1280x720")
    root.config(bg="black")
    frame_menu = tk.Frame(root, bg="chocolate")
    frame_menu.place(relx=0.0, rely=0.00)
    canvas = tk.Canvas(root, width=300, height=39, bg="chocolate")
    canvas.pack()
    canvas.place(x=1000,y=0)
    label_menu = tk.Label(root, text="FEEDBACK", font=("algerian", 25), width=53, fg="white", bg="chocolate")
    label_menu.pack(padx=200)
    label_menu.place(x=59,y=0)
    # Left icon (back arrow)
    back_icon = tk.Button(frame_menu, text="⬅️", bg='chocolate', fg='white', font=('ink free', 16) , command=root.destroy)
    back_icon.pack(side=tk.LEFT, padx=10)
    global clicked,clicked1
    clicked = tk.StringVar()
    clicked.set("class")
    # List of classes
    classes = ["Class 1", "Class 2", "Class 3"
              , "Class 4", "Class 5", "Class 6",
               "Class 7", "Class 8", "Class 9",
                "Class 10", "Class 11", "Class 12"]
    custom_font = font.Font(family="ink free", size=25)  # Increased font size
    class_combobox = ttk.Combobox(root, textvariable=clicked,
                                  values=classes, font=custom_font, 
                                state="readonly", width=25)  # Increased width
    class_combobox.place(x=200, y=50)
    class_combobox.current(0)
    clicked1 = tk.StringVar()
    clicked1.set("Section")
    # List of sections
    classes1 = ["A1", "A2", "C"]
    section_combobox = ttk.Combobox(root, textvariable=clicked1, values=classes1, font=custom_font, state="readonly", width=25)  # Increased width
    section_combobox.place(x=750, y=50)
    section_combobox.current(0)
    # Create a large text box
    text_box = tk.Text(root, height=26, width=85, bg="khaki", fg="black")
    text_box.pack(pady=10)
    text_box.place(x=320, y=200)
    # Placeholder text
    placeholder = "Type your feedback here..."
    text_box.insert(tk.END, placeholder)
    text_box.config(fg="grey")  # Set placeholder color
    # Bind events to handle placeholder
    def on_focus_in(event):
        if text_box.get("1.0", tk.END).strip() == placeholder:
            text_box.delete("1.0", tk.END)  # Clear placeholder
            text_box.config(fg="black")  # Change text color to black
    def on_focus_out(event):
        if text_box.get("1.0", tk.END).strip() == "":
            text_box.insert(tk.END, placeholder)  # Reinsert placeholder
            text_box.config(fg="grey")  # Set placeholder color
    def on_key_press(event):
        if text_box.get("1.0", tk.END).strip() == placeholder:
            text_box.delete("1.0", tk.END)  # Clear placeholder
            text_box.config(fg="black")  # Change text color to black
    # Bind the focus and key events
    text_box.bind("<FocusIn>", on_focus_in)
    text_box.bind("<FocusOut>", on_focus_out)
    text_box.bind("<Key>", on_key_press)
    #Enter Your Name
    frame_name = tk.Frame(root)
    frame_name.place(relx=0.3, rely=0.2)
    label_name = tk.Label(frame_name, text="Enter Your Name" , font=("ink free", 25),fg="powderblue", bg="black")
    label_name.pack()
    frame_namebox = tk.Frame(root)
    frame_namebox.place(relx=0.5, rely=0.2)
    entry_namebox = tk.Entry(frame_namebox ,  width=12,  font=("ink free", 25) ,bg="powderblue", fg="black")
    entry_namebox.pack()
    # Function to reset the feedback window
    def reset_feedback():
        text_box.delete("1.0", tk.END)  # Clear the text box
        text_box.insert(tk.END, placeholder)  # Reinsert the placeholder
        text_box.config(fg="grey")  # Set placeholder color
    def saveinfo():
        text = StringVar()
        textinfo= text_box.get("1.0", tk.END)
        filename2 = clicked.get() + ".txt"
        filename1 = entry_namebox.get() + ".txt"
        filename3 = clicked1.get() + ".txt"
        file= open(filename1+" "+filename2+""+filename3, "w")
        file.write(str(textinfo))
        file.close()
    frame_name = tk.Frame(root)
    frame_name.place(relx=0.3, rely=0.2)
    label_name = tk.Label(frame_name, text="Enter Your Name" , font=("ink free", 25),fg="powderblue", bg="black")
    label_name.pack()
    frame_namebox = tk.Frame(root)
    frame_namebox.place(relx=0.5, rely=0.2)
    entry_namebox = tk.Entry(frame_namebox ,  width=12,  font=("ink free", 25) ,bg="powderblue", fg="black")
    entry_namebox.pack()
    frame_send = tk.Frame(root)
    frame_send.place(relx=0.8, rely=0.85)
    button_send = tk.Button(frame_send, text="SEND", font=("ink free", 25) ,command=lambda: [saveinfo(), reset_feedback()], width=10, height = 1 ,bg="powderblue",fg="black")
    button_send.pack()
    root.mainloop()

# Global variable for dark mode flag
is_dark_mode = 1  # 1 for dark mode, 0 for light mode
def Settings():
    global root, toggle_mode_button, frame_menu, settings_frame, log_out_button, calendar_button
    # Create the main window
    root = tk.Tk()
    root.title("Settings")
    root.geometry("500x630")
    # Create the menu at the top
    frame_menu = tk.Frame(root, pady=10)
    frame_menu.pack(fill=tk.X)
    # Back button to close the current window
    back_icon = tk.Button(frame_menu, text="⬅️", bg='chocolate', fg='white', font=('ink free', 16), command=root.quit)
    back_icon.pack(side=tk.LEFT, padx=11)
    title_label = tk.Label(frame_menu, text="Setting", bg="chocolate", fg="white", font=("Arial", 16, "bold"))
    title_label.pack(side=tk.LEFT, expand=True)
    # Create the settings frame and add buttons
    settings_frame = tk.Frame(root)
    settings_frame.pack(expand=True, fill='both')
    # Toggle night/light mode button
    toggle_mode_button = tk.Button(settings_frame, text="Switch to Light Mode", command=toggle_mode, width=40, height=3)
    toggle_mode_button.place(relx=0.5, rely=0.2, anchor="center")
    # Log out button
    log_out_button = tk.Button(settings_frame, text="Log Out", command=log_out, width=40, height=3)
    log_out_button.place(relx=0.5, rely=0.4, anchor="center")
    # Calendar button
    calendar_button = tk.Button(settings_frame, text="Open Calendar", command=open_calendar, width=40, height=3)
    calendar_button.place(relx=0.5, rely=0.6, anchor="center")
    # Initial update to apply dark mode on first load
    update_ui_colors()
    # Start the Tkinter main loop
    root.mainloop()
def toggle_mode():
    global is_dark_mode
    # Toggle the mode between 0 and 1
    is_dark_mode = 1 - is_dark_mode
    # Update the UI colors based on the new mode
    update_ui_colors()
def update_ui_colors():
    global root, toggle_mode_button, frame_menu, settings_frame, log_out_button, calendar_button
    if is_dark_mode == 1:  # Dark mode
        root.config(bg="black")
        frame_menu.config(bg="chocolate")
        settings_frame.config(bg="black")

        # Update button styles for dark mode
        toggle_mode_button.config(text="Switch to Light Mode", bg='gray', fg='white')
        log_out_button.config(bg='red', fg='white')
        calendar_button.config(bg='blue', fg='white')

        # Update title and other text
        for widget in [toggle_mode_button, log_out_button, calendar_button]:
            widget.config(bg=widget.cget('bg'), fg='white')  # Ensure text color is light

    else:  # Light mode
        root.config(bg="white")
        frame_menu.config(bg="chocolate")
        settings_frame.config(bg="white")

        # Update button styles for light mode
        toggle_mode_button.config(text="Switch to Dark Mode", bg='lightgray', fg='black')
        log_out_button.config(bg='lightcoral', fg='black')
        calendar_button.config(bg='lightblue', fg='black')

        # Update title and other text
        for widget in [toggle_mode_button, log_out_button, calendar_button]:
            widget.config(bg=widget.cget('bg'), fg='black')  # Ensure text color is dark
def log_out():
    response = messagebox.askyesno("Log Out", "Are you sure you want to log out?")
    if response:
        root.quit()
def open_calendar():
    # Create a new window for the calendar
    calendar_window = tk.Toplevel(root)
    calendar_window.title("Calendar")
    calendar_window.geometry("400x400")

    # Get today's date
    today = datetime.today()
    current_year = today.year
    current_month = today.month
    current_day = today.day

    # Create the Calendar widget
    cal = Calendar(calendar_window, selectmode='day', year=current_year, month=current_month, day=current_day)
    cal.pack(pady=20, fill=tk.BOTH, expand=True)

    # Add a label to display the selected date
    date_label = tk.Label(calendar_window, text="Selected Date: ", font=("ink free", 14))
    date_label.pack(pady=10)

    def update_date():
        selected_date = cal.get_date()
        date_label.config(text=f"Selected Date: {selected_date}")

    # Add a button to get the selected date
    select_button = tk.Button(calendar_window, text="Get Selected Date", command=update_date, font=("ink free", 12))
    select_button.pack(pady=10)
    root.mainloop()
# Call the setup function to initialize everything
    Settings()

# -->"About Us" 
def open_url(event=None):
    webbrowser.open("http://www.zudiohighschool.com")  # Changed to a URL for web browsing

# This function will open the admission form
def open_admission():
    form_window = tk.Toplevel(root)
    form_window.title("Admission Form")
    form_window.geometry("400x600")

    # Name
    tk.Label(form_window, text="Name:").pack()
    entry_name = tk.Entry(form_window)
    entry_name.pack()

    # Tuition fees data
    tuition_fees = {
        "1": "10200", "2": "12100", "3": "12200", "4": "12300", "5": "12400", "6": "12500", 
        "7": "12600", "8": "12700", "9": "12800", "10": "21900", "11": "23000", "12": "23890"
    }

    # Class (Dropdown menu)
    tk.Label(form_window, text="Class:").pack()
    selected_class = tk.StringVar(value="Select Class")
    class_menu = tk.OptionMenu(form_window, selected_class, *tuition_fees.keys())
    class_menu.pack()

    # Display tuition fees based on selected class
    tuition_label = tk.Label(form_window, text="Tuition fees: ")
    tuition_label.pack(pady=10)

    def update_tuition_fees(*args):
        class_value = selected_class.get()
        fees = tuition_fees.get(class_value, "Select a valid class")
        tuition_label.config(text=f"Tuition Fees: {fees}")
    
    selected_class.trace("w", update_tuition_fees)

    # Age
    tk.Label(form_window, text="Age:").pack()
    entry_age = tk.Entry(form_window)
    entry_age.pack()

    # Upload PDF for Previous Marks
    tk.Label(form_window, text="Upload Previous Marks (PDF):").pack()
    pdf_path = tk.StringVar()

    def upload_pdf():
        file_path = filedialog.askopenfilename(filetypes=[("PDF files", "*.pdf")])
        pdf_path.set(file_path)

    button = tk.Button(form_window, text="Choose File", command=upload_pdf)
    button.pack()

    tk.Label(form_window, textvariable=pdf_path, wraplength=300).pack()

    # Exam date calculated dynamically +15 days
    exam_date = (datetime.now() + timedelta(days=15)).strftime("%d-%m-%Y")
    tk.Label(form_window, text=f"Exam Date: {exam_date}").pack()

    def submit_form():
        try:
            # Retrieve input values
            name = entry_name.get().strip()
            class_name = selected_class.get()
            age = entry_age.get().strip()
            marks_pdf = pdf_path.get()

            # Validation
            if not name or class_name == "Select Class" or not age.isdigit():
                messagebox.showerror("Error", "Please fill in all fields correctly.")
                return

            # Save the submitted information to a text file
            filename = f"{name}_{class_name}.txt"
            with open(filename, "w") as file:
                file.write(f"Name: {name}\n")
                file.write(f"Class: {class_name}\n")
                file.write(f"Age: {age}\n")
                file.write(f"Tuition Fees: {tuition_fees.get(class_name, 'N/A')}\n")
                file.write(f"Exam Date: {exam_date}\n")
                file.write(f"Marks PDF: {marks_pdf if marks_pdf else 'No file selected'}\n")

            messagebox.showinfo("Form Submitted", f"Form details saved to {filename}.\n"
                                                  f"Name: {name}\nClass: {class_name}\nAge: {age}\n"
                                                  f"Tuition Fees: {tuition_fees.get(class_name, 'N/A')}\n"
                                                  f"Exam Date: {exam_date}\n"
                                                  f"Marks PDF: {marks_pdf if marks_pdf else 'No file selected'}")
            form_window.destroy()

        except Exception as e:
            messagebox.showerror("Error", f"An unexpected error occurred: {e}")

    # Submit button creation
    tk.Button(form_window, text="Submit", command=submit_form).pack(pady=20)
def about_us():
    about_us_window = tk.Tk()
    about_us_window.title("about_us Page")
    about_us_window.geometry("1280x720")
    about_us_window.config(bg="black")

    # Frame for the title and back button
    frame_menu = tk.Frame(about_us_window, bg="chocolate", pady=10)
    frame_menu.pack(fill=tk.X)

    back_icon = tk.Button(frame_menu, text="⬅️", bg='chocolate', fg='white', font=('Arial', 16), command=about_us_window.destroy)
    back_icon.pack(side=tk.LEFT, padx=11)

    title_label = tk.Label(frame_menu, text="about_us", bg="chocolate", fg="white", font=("Arial", 16, "bold"))
    title_label.pack(side=tk.LEFT, expand=True)

    about_us_frame = tk.Frame(about_us_window, bg="black")
    about_us_frame.pack(expand=True, fill='both')

    about_us_text = '''
    Welcome to ZUDIO High School, a vibrant and nurturing educational community dedicated to empowering students
    to excel academically and personally. As the principal of this esteemed institution, I take great pride
    in our mission to cultivate a culture of lifelong learning, resilience, and innovation. At our school we
    believe that education is a transformative journey. Our exceptional faculty members are not only passionate 
    educators but also mentors who inspire students to pursue their aspirations with vigor and determination.

    We are committed to fostering an environment where curiosity is ignited, creativity is celebrated, and critical
    thinking is cultivated. Our educators employ a variety of pedagogical approaches to engage learners of all styles,
    ensuring that every student can thrive. Our curriculum is meticulously designed to be both rigorous and relevant.
    We integrate interdisciplinary learning, encouraging students to make connections across subjects while fostering
    a deep understanding of the material.

    In addition to our core academics, we offer a robust selection of electives and advanced placement courses
    that challenge our students and prepare them for future academic endeavors.
    Inclusivity is at the heart of our community. We embrace diversity and strive to create an environment where
    every student feels valued and respected.

    At ZUDIO High School, we are also deeply committed to instilling a sense of responsibility and civic engagement in
    our students. We encourage them to contribute positively to the community through service projects and initiatives
    that promote social justice and environmental stewardship. Our goal is to prepare not just scholars, but 
    compassionate and informed citizens ready to make a difference in the world.

    As we look to the future, we remain steadfast in our commitment to excellence and continuous improvement.
    In conclusion, I invite you to join us at ZUDIO High School—"a place where dreams take flight"...

    Warm regards,
    Manish Jain
    Principal, ZUDIO High School
    '''

    about_us_label = tk.Label(about_us_frame, text=about_us_text, font=('Arial', 13), bg="black", fg='white', justify="left")
    about_us_label.pack(pady=10, padx=10)

    hyperlink_label = tk.Label(about_us_frame, text="School visit link: www.zudiohighschool.com", font=("Arial", 12), bg="black", fg="blue", cursor="hand2")
    hyperlink_label.pack(pady=5)
    hyperlink_label.bind("<Button-1>", open_url)

    # Button to open the admission form
    btn_admission_form = tk.Button(about_us_frame, text="Open Admission Form", command=open_admission, bg="blue", fg="white", font=("Arial", 14))
    btn_admission_form.pack(side=tk.BOTTOM, anchor='se', pady=20, padx=20)
    about_us_window.mainloop()
    root = tk.Tk()
    root.title("Main Application")  # You can set a title for the main root window
    root.geometry("1280x720")  # Set the geometry for the main window
    about_us()  # Open the about us page
def create_scrollable_page():
    root = tk.Tk()
    root.title("Scrollable Page Example")
    root.geometry("1920x1080")
    root.config(bg="black")
    # Create a canvas for scrolling
    canvas = tk.Canvas(root, bg="black")
    scroll_y = tk.Scrollbar(root, orient="vertical", command=canvas.yview)
    scrollable_frame = tk.Frame(canvas)
    # Configure the scrollable frame
    scrollable_frame.bind("<Configure>",
                  lambda e: canvas.configure
                  (scrollregion=canvas.bbox("all")))  
    # Create a window in the canvas
    canvas.create_window((0, 0), window=scrollable_frame, anchor="nw")
    # Configure the canvas and scrollbar
    canvas.configure(yscrollcommand=scroll_y.set)
    # Pack the canvas and scrollbar
    scroll_y.pack(side="right", fill="y")
    canvas.pack(side="left", fill="both", expand=True)
    frame_menu = tk.Frame(root,bg="chocolate")
    frame_menu.place(relx=0.0 , rely=0.00)
    label_menu = tk.Label(frame_menu, text="MENU" , font=("algerian", 25), width=75,fg="white", bg="chocolate")
    label_menu.pack(padx=5)
    button_acc = tk.Button(scrollable_frame, text="ACCOUNTS", font=("ink free", 20),command=account ,width=102, height = 3 ,bg="powderblue",fg="black")
    button_acc.pack(pady=(35,0))
    button_asgn = tk.Button(scrollable_frame, text="ASSIGNMENTS", font=("ink free", 20) ,command=assignment,width=102, height = 3 ,bg="powderblue",fg="black")
    button_asgn.pack()
    button_rep = tk.Button(scrollable_frame, text="REPORT CARD", font=("ink free", 20),command=report ,width=102, height = 3 ,bg="powderblue",fg="black")
    button_rep.pack()
    button_read = tk.Button(scrollable_frame, text="READING MATERIALS", font=("ink free", 20),command=read,width=102, height = 3 ,bg="powderblue",fg="black")
    button_read.pack()
    button_feed = tk.Button(scrollable_frame, text="FEED BACK", font=("ink free", 20),command=feedback ,width=102, height = 3 ,bg="powderblue",fg="black")
    button_feed.pack()
    button_setting = tk.Button(scrollable_frame, text="SETTINGS", font=("ink free", 20),command=Settings,width=102, height = 3 ,bg="powderblue",fg="black")# --> Global variables assigned,width=102, height = 3 ,bg="powderblue",fg="black")
    button_setting.pack()
    button_abt = tk.Button(scrollable_frame, text="ABOUT US", font=("ink free", 20),command=about_us,width=102, height = 3 ,bg="powderblue",fg="black")
    button_abt.pack()
    root.mainloop()
# --->loginpage
def loginpage():
    # Create the main window
    global root
    global entry_id,entry_password,entry_class
    root = tk.Tk()
    root.title("Login Page")
    # Set the size of the window
    root.geometry("1920x1080")
    root.config(bg="black")
    # Create a frame to hold the login form
    frame_login = tk.Frame(root)
    frame_login.place(relx=0.45, rely=0.8)
    frame_user = tk.Frame(root)
    frame_user.place(relx=0.41, rely=0.48)
    frame_userbox = tk.Frame(root)
    frame_userbox.place(relx=0.55, rely=0.48)
    frame_pass = tk.Frame(root)
    frame_pass.place(relx=0.41, rely=0.68)
    frame_passbox = tk.Frame(root)
    frame_passbox.place(relx=0.55, rely=0.68)
    frame_image = tk.Frame(root)
    frame_image.place(relx=0.45, rely=0.05)
    # Create and place labels and entry fields
    label_id = tk.Label(frame_user, text="Student id" , font=("ink free", 25),fg="powderblue", bg="black")
    label_id.pack()
    entry_id = tk.Entry(frame_userbox ,  width=12,  font=("ink free", 25) ,bg="powderblue", fg="black")
    entry_id.pack()
    entry_class = tk.Entry(root ,  width=12,  font=("ink free", 25) ,bg="powderblue", fg="black")
    entry_class.pack()
    entry_class.place(x=845,y=490)
    label_class = tk.Label(root, text="Class" , font=("ink free", 25),fg="powderblue", bg="black")
    label_class.pack()
    label_class.place(x=680,y=490)
    label_password = tk.Label(frame_pass, text="Password:" , font=("ink free", 25),fg="powderblue",  bg="black")
    label_password.pack()
    entry_password = tk.Entry(frame_passbox,width=12, font=("ink free", 25),show="*",bg="powderblue", fg="black")  # show="*" hides the password
    entry_password.pack()
    # Create and place the login button
    button_login = tk.Button(frame_login, text="Login", font=("ink free", 25),command=login ,width=10, height = 1 ,bg="powderblue",fg="black")
    button_login.pack()
    image_path = r"C:\Users\Gateway\Desktop\computer_tkinter\image\logo.jpg"  # Replace with your image path
    image = Image.open(image_path)
    resized_image = image.resize((250, 250))
    photo = ImageTk.PhotoImage(resized_image)
    label_image = tk.Label(frame_image, image=photo)
    label_image.image = photo  # Keep a reference to avoid garbage collection
    label_image.pack()
     # Run the application
    root.mainloop()
loginpage()


