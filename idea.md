# Calendar/Task Manager Project

A project that consists of a tablet/iPad style device and an app on a phone which connect over bluetooth. The end-goal of the project is to increase productivity, as the whole project should be optimised, and should facilitate planning. The overall budget of the project is around £30. The project helps the user manage the tasks they need to do, using the task manager, and plan their days/events, using the calendar. Both the device and the app can function independently of eachother and do not require being connected however they can be synced and work together aswell.

---

<br>

## Device

### Hardware

All components should be **cheap** and **affordable**. The device must be **mobile** so therefore must be **battery run**.

####  Display

* Texture - Should feel like paper.
* Will be used to write on with an "electronic-pencil" so has to be able to handle inputs.
* Efficient - Should not use a lot on electricity. Could possibly use e-ink display so it is always displaying calendar events or tasks without any energy consumption.
* Cheap - Must be affordable.


#### Pencil

* Functionality - Will be used by user to write on the tablet device and interact with the device.
* 3D Printed - Could be 3D printed.3D printer and filament do not affect budget.


#### Brain

* Microcontroller - Most likely a microcontroller unless other better options are available.
* Bluetooth - Has to have Bluetooth or Bluetooth capabilities.
* Cheap - Must be affordable.
* Efficient - Must not consume a lot of electricity.


#### Battery

* Rechargable
* Cheap But Reliable - Must be affordable but still reliable as to not pose a danger.


#### Case

* 3D Printed - Could be 3D printed.3D printer and filament do not affect budget.


#### Circuitry

* PCB - A possibility but would contribute to cost. However, if not used another method would be required to connect all the cables and the circuit.
* Wires - Available and do not contribute to cost.
* Push-Buttons - Available and do not contribute to cost. Optional to use.
* Switch - Must be a switch that would break the power supply from battery to brain and rest of circuit. Would contribute to budget.
* Solder - Circuit could be built using solder. Solder and solder iron would not affect budget.

<br>

### Software

The UI of the device will be split into 3 main sections with a way to cahnge between them: the Task Manager, the Calendar and the Settings page.Should be pleasant for a smooth user experience. Optimised for efficiency and for productivity. Should feel as easy and intuitive as using paper to plan calendars and create tasks. All animations and transitions must be smooth and fluid. The UI should also be aesthetically pleasing.

#### Task Manager

|Capability/Features|Action|
|:------------------|:-----|
|**Parent-Child Organisation -** <br> "Parent" tasks must be able to be decomposed into smaller "Child" subtasks that can be hidden away. Only one layer of subtasks is allowed so a "Child" cannot have a "Child".|Tapping once, using the pencil, on a "Parent" task will allow you to add a subtasks.|
|**Completed Tasks -** <br> A task can get done or completed. If a task is completed it will smoothly transistion into a diffrent list called the completed list. |Tapping on the task's checkbox|
|**Move-Ability -** <br> All tasks will be able to move around. Completed tasks will not be able to move into the uncompleted list and uncompleted tasks cannot move into the completed list.|Tapping and holding with the pencil will allow the user to drag and move tasks around.|
|**Subtask Move-Ability -** <br> All subtasks are able to move around but a "Child" of one "Parent" cannot be moved into another "Parent" task.|Using the pencil to tap and hold on the subtask where it can then be dragged into position.|
|**Subtask Hiding -** <br> All "Parent" tasks will have a button that allows the user to hide and reveal subtasks. However, "Parent" tasks that do not have subtasks will not have that button|Tapping, using the pencil, on the hide/reveal subtask button|

#### Calendar

The initial view of the calendar page will be the current month and the days of the week on the left side of the screen but on the right will be the timeline view.

|Capability/Features|Action|
|:------------------|:-----|
|**Timeline View -** <br> The calendar can will have a "timeline view" which allows the user to see the events of the selected day. The timeline view will display the events|To select the day the user would have to tap once on the specific day using the pencil.|
|**Events -** <br> Events are the things that will happen in a day.Events can be created when in the timeline view and will be given a start and end time by the user. The calendar will be able to display event on a timeline of the selected day.|When in the timeline view, the user will be able to tap and hold on the timeline to create an event. This will happen as a window will pop up allowing the user to input the deatils of the event.|
|**Event Types -** <br> There will be different event types that can be assigned by the user. Some event types would be holidays, birthdays, and normal. The default type is normal unless the user changes it.|There will be a dropdown list of event types the user can tap on using the pencil to assign an event type.|
|**Task Creation -** <br> The user will have the ability to create events that also appear on the on the Task Manager list. The pop-up window will have a button to make the event being made a task as well. When the end-time of the event is reached the task is automatically completed in the Task Manager.|The user will tap on a button using the pencil|

#### Writing Recognition

The name of tasks and events will be given by the user by them writing using the pencil. Therefore the device must be able to recognise handwriting and convert it into text.

#### Settings

The settings page will allow the user to handle bluetooth connectivity and other options.


---

<br>

## Application
The overall user experience and UI should be very similar to the software in the device. The application is for personal use only for iPhone 12.

### SideStore

The app will be coded on a Mac in the native code for applications for iOS and be downloaded and maintained on the iPhone using SideStore. 

### Features

#### Offline

The app must be able to function offline.

#### Task Manager

|Capability/Features|Action|
|:------------------|:-----|
|**Parent-Child Organisation -** <br> "Parent" tasks must be able to be decomposed into smaller "Child" subtasks that can be hidden away. Only one layer of subtasks is allowed so a "Child" cannot have a "Child".|Tapping once on a "Parent" task will allow you to add a subtasks.|
|**Completed Tasks -** <br> A task can get done or completed. If a task is completed it will smoothly transistion into a diffrent list called the completed list. |Tapping on the task's checkbox|
|**Move-Ability -** <br> All tasks will be able to move around. Completed tasks will not be able to move into the uncompleted list and uncompleted tasks cannot move into the completed list.|Tapping and holding will allow the user to drag and move tasks around.|
|**Subtask Move-Ability -** <br> All subtasks are able to move around but a "Child" of one "Parent" cannot be moved into another "Parent" task.|Tapping and holding on the subtask where it can then be dragged into position.|
|**Subtask Hiding -** <br> All "Parent" tasks will have a button that allows the user to hide and reveal subtasks. However, "Parent" tasks that do not have subtasks will not have that button|Tapping on the hide/reveal subtask button|

#### Calendar

The initial view of the calendar page will be the current month and the days of the week.

|Capability/Features|Action|
|:------------------|:-----|
|**Timeline View -** <br> The calendar can will have a "timeline view" which allows the user to see the events of the selected day. The timeline view will display the events|To select the day the user would have to tap once on a specific day.|
|**Events -** <br> Events are the things that will happen in a day.Events can be created when in the timeline view and will be given a start and end time by the user. The calendar will be able to display event on a timeline of the selected day.|When in the timeline view, the user will be able to tap and hold on the timeline to create an event. This will happen as a window will pop up allowing the user to input the deatils of the event.|
|**Event Types -** <br> There will be different event types that can be assigned by the user. Some event types would be holidays, birthdays, and normal. The default type is normal unless the user changes it.|There will be a dropdown list of event types the user can tap on to assign an event type.|
|**Task Creation -** <br> The user will have the ability to create events that also appear on the on the Task Manager list. The pop-up window will have a button to make the event being made a task as well. When the end-time of the event is reached the task is automatically completed in the Task Manager.|The user will tap on a button.|

#### Settings

The settings page will allow the user to handle bluetooth connectivity, themes and other options.

---

<br>

## Conflict Resolution

When the devices sync there are bound to be some conflicts therefore there must be protocols and rules set in place to resolve the conflict. Some examples are:

|Conflict|Resolution|
|:-------|:---------|
|The same task/event is edited on both|Each field keeps its most recent change. If different fields were changed on each side (e.g. renamed on the device, completed on the phone), both changes are kept.|
|Deleted on one side, edited on the other|The delete wins. Deletions are remembered for 5 days. If the two haven't synced for longer than that, a full comparison makes sure deleted items don't come back.|
|A "Parent" task is deleted on one side while a subtask is added under it on the other|The new subtask is deleted along with its "Parent".|
|Completed on one side, un-completed on the other|The most recent change wins.|
|The same list is reordered on both|Each moved task keeps its most recent position. Ties are broken the same way on both, so the order ends up identical.|
|An event's time is changed|After syncing, its linked task is checked again and auto-completes if the event has ended.|
|The same task is created separately on both|Both are kept as separate tasks.|
|The clocks on the phone and device differ|The phone sets the device's clock at every sync, and changes are ordered with a hybrid logical clock so small clock differences can't pick the wrong winner.|
|A shared setting is changed on both|The most recent change wins.|:

|Problem|Solution|
|:------|:-------|
|**Overlapping events -** <br> If both the application and the device have events scheduled for the same time and day on the calendar.|The user will be notified and told to reschedule the events|
|**Completed Tasks -** <br> If a task get completed on the device but it remains uncomlpeted on the application, when they sync there will be a conflict.|A possible solution is that since the tasks have the same name/identifier they both become completed when they sync.|

## Github

Github will be used for version control of both the application and the device software. All the code from this folder, */home/diego/Personal-Projects/task-calendar*, will be saved in a repo called *dsaezgonzalez/calendar-task-manager*.