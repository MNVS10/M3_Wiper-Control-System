# REPORT #

# Abstract #

Wiper is an equipment used in vehicles to clean and wipe out water and dust particles from the wind screen. It is practically not possible for a driver to clean the windscreen while driving in rain. Hence there is a high necessary for a mechanism to do this job in a sigle click. Thus the objective of the project is to develop
a mechanism to clean the windscreen while the  vehicle is running. This project also aims to clean the wind screen at different speed respective to the rate of rainfall.
Thus providing a clear vison to the driver for a safe driving.The project is developed using STM32 ARM based controller.


# Requirements #
  * Red led to show the state of engine,
  * Blue, Green and Orange LED to show the path of Wiper.
  * STM32CubeIDE
  
 # Low Level Requirements #
|**Test ID**|**Description**|**Status**|
| :- | :-: | :-: |
|L\_01|Turnig on Red LED by an long press|Need to be Implemented|
|L\_02|Turning on blue Green and orange Led|Implemented|
|L\_03|Turnig off Red LED by an long press|Need to be Implemented|

# High Level Requirements #
|**Test ID**|**Description**|**Status**|
| :- | :-: | :-: |
|H\_01|Turning on blue Green and orange Led at 1Hz Frequency|Implemented|
|H\_02|Turning on blue Green and orange Led at 4Hz Frequency|Implemented|
|H\_03|Turning on blue Green and orange Led at 8Hz Frequency|Implemented|
|H\_04|Turning off blue Green and orange Led after completing a cycle when button is long pressed|Need to be Implemented|

# SWOT Analysis:
	
	Strength:Provide a clean vison and comfortable driving to the driver.
	Weakness: Adding this mechanism to older vechiles is difficult.
	Opportunities: All vechicles can be made with this mechanism at low cost.
	Threats:Making the drivers aware of the requirement of this mechanism.
  
# FlowCharts #
# Low Level FlowChart
![Low Level](https://user-images.githubusercontent.com/102293784/168420387-14f9e787-8a43-4576-8367-6b26a79ce63d.JPG)

# High Level FlowChart
![High Level](https://user-images.githubusercontent.com/102293784/168420438-eb18dd53-4d9c-473d-a785-c8411fddfa36.jpeg)

# Explanation 
The project is done using STM32F4XX Discovery Board. In that we use 4 Onbaord LEDs and 1 Onboard User Button. In that the red is used to represent the state of vehicle engine. Other 3 LEDs Blue, Green and Orange is  used to represent the position of Wipers. In this project the wipers work at 3 different speeds represented by the change in frequency of LEDs. The Engine is turned by Long press of the user button. Thus if we Long press the user button RED LED will be turned ON. Then if we short press wiper should turn ON at a frequency of 1Hz. So the Blue Green and Orange LEDs will turn ON and OFF at a frequency of 1Hz. Then if we short press again the frequency is increased to 4Hz. Hence the Blue Green and Orange LEDs will turn ON and OFF at a frequency of 4Hz. If we short press once again the frequency is increased to 8Hz so that LEDs will blink at a frequency of 8Hz. And to turn off the engine the user button need to be long pressed.

T# TEST CASES:

## Low Level test plan

|**Test ID**|**Description**|**Exp O/P**|**Actual O/P**|
| :- | :-: | :-: | :-: |
|L\_01|Working of STM32F4XX|SUCCESS|SUCCESS|
|L\_02|Sequential Working of LEDs as per the requirements|SUCCESS|SUCCESS|
|L\_03|Turning on and changing the pattern as per the user input|UNSUCCESFUL|UNSUCCESFUL|


## High Level test plan


|**Test ID**|**Description**|**Exp O/P**|**Actual O/P**|
| :- | :-: | :-: | :-: |
|H\_01|Sequential Working of LEDs at 1Hz Frequency|SUCCESS|SUCCESS|
|H\_02|Sequential Working of LEDs at 4Hz Frequency|SUCCESS|SUCCESS|
|H\_03|Sequential Working of LEDs at 8Hz Frequency|SUCCESS|SUCCESS|
|H\_04|Controlling the sequence by user button|UNSUCCESSFUL|UNSUCCESSFUL|
|H\_05|Turning on Red Light by a long press|UNSUCCESSFUL|UNSUCCESSFUL|

# OUTPUT

# Engine ON
![Engine ON](https://user-images.githubusercontent.com/102293784/168423387-51281f88-2bbe-4628-8730-98b7a17ee425.png)

# Working of 3 LEDs
![Blue Led](https://user-images.githubusercontent.com/102293784/168423408-be45d257-cb93-4cbf-93a5-6bf4b1f3dc49.png)

![Green led](https://user-images.githubusercontent.com/102293784/168423409-fd02e866-e7f4-4b6a-b215-492bcf5d8774.png)

![Orange Led](https://user-images.githubusercontent.com/102293784/168423410-47754d4c-c010-40c3-8ca8-26c14fbd8bae.png)

# Engine OFF
![Engine OFF](https://user-images.githubusercontent.com/102293784/168423422-af1052a3-0d5c-497b-ae0a-8adbf289a913.png)

# Working
https://user-images.githubusercontent.com/102293784/168423433-67fa4bba-f4a2-45c3-b6d5-365c9ac55d2d.mp4

# Conclusion
 A mechanism which is used to clean the windscreen from dust and rain is developed. Moreover it works at it 3 different frequencies. All this control is controlled by a single switch.




