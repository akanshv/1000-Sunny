#### ROBOTIC INTELLIGENCE

#### PROJECT

IIIT Sricty

Team : 1000 Sunny

```
Akansh Vaibhav
Pranav Gupta
Urjasvi Suthar
Sai Deepthi
```
-
-
-
-

```
S
S
S
S
```

###### INTRODUCTION

**DOMAIN : CIVIL APPLICATIONS**

**PROJECT TITLE : Solar Tracking Robot for Solar Panels To Maximize Energy Output**

1000 Sunny is a solution designed to **optimize solar panel performance** by dynamically **aligning with the sun's
position** throughout the day. The Solar Tracking Robot employs a sophisticated tracking system that autonomously
follows the sun's trajectory, ensuring that solar panels are always positioned at the optimal angle to harness the
maximum sunlight. This innovative robot enhances energy efficiency by continuously adapting to the sun's movement,
resulting in significantly increased power generation compared to fixed solar installations.

Key features include **LDR sensors** , **Linear Regression algorithms** , and a **robust mechanical design** , allowing the Solar
Tracking Robot to navigate the solar array's surface seamlessly. This not only boosts energy yield but also prolongs the
lifespan of solar panels by minimizing stress and wear caused by suboptimal angles.

With sustainability at the forefront of our mission, the Solar Tracking Robot represents a giant leap toward harnessing
renewable energy more efficiently. Whether deployed in residential, commercial, or industrial settings, this automated
solution promises to revolutionize solar energy systems, making them more productive, cost-effective, and
environmentally friendly.


MOTIVATION

The motivation behind our Solar Tracking Robot project is rooted in the pressing need for sustainable and
efficient energy solutions to address the ever-growing global demand for electricity. As we navigate the
complexities of an energy-hungry world, it becomes imperative to harness renewable resources intelligently.

Traditional fixed solar installations are limited by their static orientation, often unable to fully capitalize on the
sun's varying position in the sky. This inefficiency represents a missed opportunity to unlock the true potential of
solar energy. The Solar Tracking Robot is conceived as a response to this limitation, driven by the motivation to
revolutionize how we harness solar power.

By dynamically tracking the sun's movement throughout the day and relative positions over the year our Solar
Tracking Robot aims to significantly enhance the energy output of solar panels. The Project aims to increase
the net energy generated while also covering the cost of moving the solar panels.

In summary, our motivation for the Solar Tracking Robot project is rooted in environmental responsibility, a
commitment to advancing technology, and the vision of a future where clean energy is not just an option but a
global standard.


**Static Solar Panel :**

Energy Produced by Solar Panel in “Peak Condition” (per meter sq): **1kW**

Average Efficiency of the Solar Panel Throughout the Day: **20 - 40 %**

Energy Produced by Solar Day in One Day (per meter sq): **(1000 * 0.2) * 6 hours = 1200kWh**

**Dynamic Solar Panel :**

Peak Efficiency of the Solar Panel: **50 % More efficient than regular efficiency**

Energy Produced by Dynamic Solar Panel (per meter sq): **((1000 * 0.2)*1.5) * 6 hours = 1800kWh**
*
Energy Required to Move the Solar Panel: **6w * 24 hours = 144Wh**

Net Increase in Energy Produced : **(1800000 - 144) - 1600000 = 1,99,856 = 200kWH (roughly)**

EXPECTED EFFICIENCY INCREASE


1000 Sunny RELATED WORK 05

```
DESIGN AND IMPLEMENTATION OF SOLAR
TRACKING SYSTEM USING LDR SENSOR
Int. J. Adv. Sci. Eng. Vol.6 No.3 1456-1461 (2020 1456 E-ISSN: 2349 5359; P-ISSN: 2454-9967 Sumathi et
al., International Journal of Advanced Science and Engineering http://www.mahendrapublications.com.
Design and Implementation of Solar Tracking System using LDR Sensor S.Sumathi*, G.Gayathri, A.Jancy
Rani, S.Deepalakshmi, K.Karthikeyan Department of Electrical and Electronics Engineering, Mahendra
Engineering College, Mallasamudram - 637 503, Namakkal District, Tamil Nadu, India
```
```
A NEW DESIGN OF DUAL-AXIS SOLAR TRACKING SYSTEM WITH LDR
SENSORS BY USING THE WHEATSTONE BRIDGE CIRCUIT
M. Saeedi and R. Effatnejad, "A New Design of Dual-Axis Solar Tracking System With LDR Sensors by
Using the Wheatstone Bridge Circuit," in IEEE Sensors Journal, vol. 21, no. 13, pp. 14915-14922, 1 July 1,
2021, doi: 10.1109/JSEN.2021.3072876.
keywords: {Sensors;Bridge circuits;Resistance;Sun;Shafts;Sensor systems;Electrical resistance
measurement;Wheatstone bridge;LDR sensors;DAST system;PV panel;closed-loop system},
```
```
AUTOMATED DUAL AXIS SUN TRACKING SOLAR
PANELS BASED ON LDR AND RTC SENSOR
International Journal of Engineering Research & Technology (IJERT) Published by : http://www.ijert.org
ISSN: 2278-0181 Vol. 10 Issue 04, April-2021 Automated Dual Axis Sun Tracking Solar Panels based on
LDR and RTC Sensor Abhijeet Deshmukh, Prashant Devmane, Rajas Ambekar, Pawar Piyush, Prof.
Maheshwari N Patil JSPM Rajarshi Shahu College of Engineering Tathawade.
```

### LIST OF

### HARDWARES

```
Ardiuno x 1
Open-source hardware and software platform
for DIY electronics projects and prototyping.
```
```
Bread Board x 2
Prototype circuits easily with a reusable
breadboard for electronics projects
```
```
Servo Motor x 2
Precision motion control; electric motors for
accurate and responsive applications.
```
```
Jumper Wires
Flexible connectors for electronic components,
enabling seamless circuit connections.
```
```
Solar Cell
Efficient solar panels, inverters, batteries to
track sun and generate energy
```
```
LDR x 4
LDR Sensors to collect Light Intensity values of
Light Sources.
```

## ROBOT MODEL


## ROBOT DIAGRAM

T

R

Bread
Board

Ardiuno

LDR Sensors

Solar Panel

Joints

```
Light
Blocking
Block
```
N


## MANIPULATOR DIAGRAM

The Solar Panel Manipulator
consists of two Servo Motors,
one of which acts as a Twisting
joint at the base and the other
acts as a Revolute Joint at the
Other Joint.

Thus, The Manipulator acts as
Spherical pr Revolute
manipulator without the third
Manipulator

It is a TR type Manipulator

**Elevation View Plan View**

T

T

R


## CIRCUIT DIAGRAM

Arduino Board

Bread Board

Servo Motor

LDR LDR

Capacitor


RUNNING VIDEO


#### LINEAR REGRESSION

```
Linear regression is a statistical method used for
modelling the relationship between a dependent
variable and one or more independent variables.
```
```
Dependent Variable: Angle
Independent Variable: LDR Values
```
```
Linear Regression aims to find the best-fitting line
(or hyperplane in higher dimensions) that
minimizes the difference between the actual
observed values and the values predicted by the
model. This line is characterized by parameters:
the slope and the intercept.
```
```
Trend Between LDR Value and Angle :
```

#### LINEAR REGRESSION

Output of the Best Model of Linear Regression

```
Bias: -144.
Weight1: 0.
Weight2: 0.
```
Loss in the Best Model:

```
Absolute Mean Average Loss: 9.
Mean Square Error: 124.
```
**Code : Results :**


#### CODE


DATA COLLECTION METHOD

```
We are collecting our data from the robot created.
```
The data is in the Format :
LDR1 Value; LDR2 Value; Position of Light Source;
LDR1 Value; LDR2 Valure; LDR3 Value; LDR4 Value; Position of Light Source;

```
Using this data we implemented a Linear Regression Model that takes real-time input from LDR and returns the
correct angle of the Solar Panel so that it maximizes the energy output.
```

CONCLUSION

Collected all the necessary parts required for the robot

Prepared Models for the Robot and Manipulator.

Prepared a Circuit Diagram for the Robot

Assembled the prototype based on the proposed Model

Collected Data for Light Source Position vs LDR Readings

Applied Linear Regression Model Based on Data Collection method to predict accurate angle in real-time

Added 4 LDR System to counter 360 degree movement of Light Source.

Created a Final Working Prototype Prepared


##### TIMELINE

```
Applying ML Approaches
Applying 360 Degree Movement
```
```
STAGE 3
Getting all the parts
Preparing a model of
Manipulator
Assembling the Robot
```
STAGE 1

```
Collecting/Creating a dataset of LDR
Readings vs Sun Position in the sky
Finding best Machine Learning
Approach for the given dataset
```
STAGE 2


WORK DISTRIBUTION

```
Creation of Dataset of LDR vs Light Source Position
Making Base of Model
Making Linear Regression Model for Two-Way
Movement
```
Akansh Vaibhav

```
Creation of Dataset of LDR vs Light Source Position
Making Base of Model
Making Linear Regression Model for Two-Way
Movement
```
Pranav Gupta

```
Assembled The Circuit
Written code for the Solar Tracking Manipulator
Setting Up 4 LDR Setup
Training Model and making code for 360 manipulator
movement
```
Urjasvi Suthar

```
Assembled The Circuit
Written code for the Solar Tracking Manipulator
Training Model and making code for 360 manipulator
Movement
```
Sai Deepthi


# THANK YOU!


