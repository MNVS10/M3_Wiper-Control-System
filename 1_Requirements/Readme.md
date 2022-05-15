# Requirements #
  * Red led to show the state of engine,
  * Blue, Green and Orange LED to show the path of Wiper.
  * STM32CubeIDE
  
 # Low Level Requirements #
|**Test ID**|**Description**|**Status**|
| :- | :-: | :-: |
|L\_01|Turnig on Red LED by an long press|Need to be Implemented|
|L\_02|Turning on blue Green and orange Led |Implemented|
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
	
# 4W and H
# WHAT
 A mechanism which is used to clean the windscreen while drving thus providing a clear vision for  the driver.Because it is not practically possible for a driver to clean the windscreen during rain while driving.
 
#WHO
 The manufacturers of the vechicles should implement this mechanism in all vehicles and the drivers should use it as per the requirements.
 
#WHERE
 In all cars, trucks and other LMVs and HMVs.
 
#WHEN
 During rains and while travelling in dusty areas.
 
#HOW
 It is developed using STM32F4XX discovery board using 4 LEDs.
 
 
