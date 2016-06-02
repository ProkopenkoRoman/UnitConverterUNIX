
FLAG = ./obj
# Main.o parsing.o convert.o Length.o Amount.o Angle.o Area.o Data.o Electric_charge.o Energy.o Frequency.o Mass.o Power.o Pression.o QuantityOfSubstance.o Speed.o Strength.o Temperature.o Time.o selectionswitchAmount.o selectionswitchAngle.o selectionswitchData.o selectionswitchEnergy.o selectionswitchFrequency.o selectionswitchLength.o selectionswitchMass.o selectionswitchPower.o selectionswitchPression.o selectionswitchQuantityOfSubstance.o selectionswitchSpeed.o selectionswitchTemperature.o selectionswitchTime.o 

Convert: $(FLAG)/Main.o $(FLAG)/parsing.o $(FLAG)/convert.o $(FLAG)/Length.o $(FLAG)/Amount.o $(FLAG)/Angle.o $(FLAG)/Area.o $(FLAG)/Data.o $(FLAG)/Electric_charge.o $(FLAG)/Energy.o $(FLAG)/Frequency.o $(FLAG)/Mass.o $(FLAG)/Power.o $(FLAG)/Pression.o $(FLAG)/QuantityOfSubstance.o $(FLAG)/Speed.o $(FLAG)/Temperature.o $(FLAG)/Time.o $(FLAG)/Resistance.o $(FLAG)/Radiation.o $(FLAG)/Strength.o $(FLAG)/selectionswitchAmount.o $(FLAG)/selectionswitchAngle.o $(FLAG)/selectionswitchData.o $(FLAG)/selectionswitchEnergy.o $(FLAG)/selectionswitchFrequency.o $(FLAG)/selectionswitchLength.o $(FLAG)/selectionswitchMass.o $(FLAG)/selectionswitchPower.o $(FLAG)/selectionswitchPression.o $(FLAG)/selectionswitchQuantityOfSubstance.o $(FLAG)/selectionswitchSpeed.o $(FLAG)/selectionswitchTemperature.o $(FLAG)/selectionswitchTime.o $(FLAG)/selectionswitchArea.o $(FLAG)/selectionswitchRadiation.o $(FLAG)/selectionswitchResistance.o
 
# parsing.o convert.o Length.o Amount.o Angle.o Area.o Data.o Electric_charge.o Energy.o Frequency.o Mass.o Power.o Pression.o QuantityOfSubstance.o Speed.o Strength.o Temperature.o Time.o selectionswitchAmount.o selectionswitchAngle.o selectionswitchData.o selectionswitchEnergy.o selectionswitchFrequency.o selectionswitchLength.o selectionswitchMass.o selectionswitchPower.o selectionswitchPression.o selectionswitchQuantityOfSubstance.o selectionswitchSpeed.o selectionswitchTemperature.o selectionswitchTime.o 
		gcc -o Convert -lm $^
 
$(FLAG)/Main.o: Main.c
		gcc -c Main.c -o $(FLAG)/Main.o
		#сервис
$(FLAG)/parsing.o: Service/parsing.c
		gcc -c Service/parsing.c -o $(FLAG)/parsing.o
		
$(FLAG)/convert.o: Service/convert.c
		gcc -c Service/convert.c -o $(FLAG)/convert.o
	#модули
$(FLAG)/Length.o: Modules/Length.c
		gcc -c Modules/Length.c -o $(FLAG)/Length.o

$(FLAG)/Amount.o: Modules/Amount.c
		gcc -c Modules/Amount.c -o $(FLAG)/Amount.o
		
$(FLAG)/Angle.o: Modules/Angle.c
		gcc -c Modules/Angle.c -o $(FLAG)/Angle.o
		
$(FLAG)/Area.o: Modules/Area.c
		gcc -c Modules/Area.c -o $(FLAG)/Area.o

$(FLAG)/Data.o: Modules/Data.c
		gcc -c Modules/Data.c -o $(FLAG)/Data.o
		
$(FLAG)/Electric_charge.o: Modules/Electric_charge.c
		gcc -c Modules/Electric_charge.c -o $(FLAG)/Electric_charge.o
	
$(FLAG)/Energy.o: Modules/Energy.c
		gcc -c Modules/Energy.c -o $(FLAG)/Energy.o
		
$(FLAG)/Frequency.o: Modules/Frequency.c
		gcc -c Modules/Frequency.c -o $(FLAG)/Frequency.o
		
$(FLAG)/Mass.o: Modules/Mass.c
		gcc -c Modules/Mass.c -o $(FLAG)/Mass.o
		
$(FLAG)/Power.o: Modules/Power.c
		gcc -c Modules/Power.c -o $(FLAG)/Power.o
		
$(FLAG)/Pression.o: Modules/Pression.c
		gcc -c Modules/Pression.c -o $(FLAG)/Pression.o
		
$(FLAG)/Resistance.o: Modules/Resistance.c
		gcc -c Modules/Resistance.c -o $(FLAG)/Resistance.o
		
$(FLAG)/Radiation.o: Modules/Radiation.c
		gcc -c Modules/Radiation.c -o $(FLAG)/Radiation.o
	
$(FLAG)/QuantityOfSubstance.o: Modules/QuantityOfSubstance.c
		gcc -c Modules/QuantityOfSubstance.c -o $(FLAG)/QuantityOfSubstance.o

$(FLAG)/Speed.o: Modules/Speed.c
		gcc -c Modules/Speed.c -o $(FLAG)/Speed.o

$(FLAG)/Temperature.o: Modules/Temperature.c
		gcc -c Modules/Temperature.c -o $(FLAG)/Temperature.o
		
$(FLAG)/Time.o: Modules/Time.c
		gcc -c Modules/Time.c -o $(FLAG)/Time.o
##
#$(FLAG)/Strength.o: Modules/Strength.c
#		gcc -c Modules/Strength.c -o $(FLAG)/Strength.o

#$(FLAG)/Ampere.o: Modules/Ampere.c
#		gcc -c Modules/Ampere.c -o $(FLAG)/Ampere.o

#$(FLAG)/Density.o: Modules/Density.c
#		gcc -c Modules/Density.c -o $(FLAG)/Density.o		
		
		#свитчи	
$(FLAG)/selectionswitchAmount.o: Switches/selectionswitchAmount.c
		gcc -c Switches/selectionswitchAmount.c -o $(FLAG)/selectionswitchAmount.o

$(FLAG)/selectionswitchAngle.o: Switches/selectionswitchAngle.c
		gcc -c Switches/selectionswitchAngle.c -o $(FLAG)/selectionswitchAngle.o
		
$(FLAG)/selectionswitchData.o: Switches/selectionswitchData.c
		gcc -c Switches/selectionswitchData.c -o $(FLAG)/selectionswitchData.o

$(FLAG)/selectionswitchEnergy.o: Switches/selectionswitchEnergy.c
		gcc -c Switches/selectionswitchEnergy.c -o $(FLAG)/selectionswitchEnergy.o
		
$(FLAG)/selectionswitchFrequency.o: Switches/selectionswitchFrequency.c
		gcc -c Switches/selectionswitchFrequency.c -o $(FLAG)/selectionswitchFrequency.o

$(FLAG)/selectionswitchLength.o: Switches/selectionswitchLength.c
		gcc -c Switches/selectionswitchLength.c -o $(FLAG)/selectionswitchLength.o
		
$(FLAG)/selectionswitchMass.o: Switches/selectionswitchMass.c
		gcc -c Switches/selectionswitchMass.c -o $(FLAG)/selectionswitchMass.o

$(FLAG)/selectionswitchPower.o: Switches/selectionswitchPower.c
		gcc -c Switches/selectionswitchPower.c -o $(FLAG)/selectionswitchPower.o
		
$(FLAG)/selectionswitchPression.o: Switches/selectionswitchPression.c
		gcc -c Switches/selectionswitchPression.c -o $(FLAG)/selectionswitchPression.o

$(FLAG)/selectionswitchQuantityOfSubstance.o: Switches/selectionswitchQuantityOfSubstance.c
		gcc -c Switches/selectionswitchQuantityOfSubstance.c -o $(FLAG)/selectionswitchQuantityOfSubstance.o
		
$(FLAG)/selectionswitchSpeed.o: Switches/selectionswitchSpeed.c
		gcc -c Switches/selectionswitchSpeed.c -o $(FLAG)/selectionswitchSpeed.o

$(FLAG)/selectionswitchTemperature.o: Switches/selectionswitchTemperature.c
		gcc -c Switches/selectionswitchTemperature.c -o $(FLAG)/selectionswitchTemperature.o
		
$(FLAG)/selectionswitchTime.o: Switches/selectionswitchTime.c
		gcc -c Switches/selectionswitchTime.c -o $(FLAG)/selectionswitchTime.o
		
$(FLAG)/selectionswitchResistance.o: Switches/selectionswitchResistance.c
		gcc -c Switches/selectionswitchResistance.c -o $(FLAG)/selectionswitchResistance.o
		
$(FLAG)/selectionswitchRadiation.o: Switches/selectionswitchRadiation.c
		gcc -c Switches/selectionswitchRadiation.c -o $(FLAG)/selectionswitchRadiation.o

$(FLAG)/selectionswitchArea.o: Switches/selectionswitchArea.c
		gcc -c Switches/selectionswitchArea.c -o $(FLAG)/selectionswitchArea.o
##
#$(FLAG)/selectionswitchStrength.o: Switches/selectionswitchStrength.c
#		gcc -c Switches/selectionswitchStrength.c -o $(FLAG)/selectionswitchStrength.o
		
#$(FLAG)/selectionswitchAmpere.o: Switches/selectionswitchAmpere.c
#		gcc -c Switches/selectionswitchAmpere.c -o $(FLAG)/selectionswitchAmpere.o
		
#$(FLAG)/selectionswitchDensity.o: Switches/selectionswitchDensity.c
#		gcc -c Switches/selectionswitchDensity.c -o $(FLAG)/selectionswitchDensity.o

# тесты
test: $(FLAG)/ctect.o $(FLAG)/main.o $(FLAG)/parsing.o $(FLAG)/Length.o
		gcc -o Test -lm $^

$(FLAG)/ctect.o: test/ctect.c
		gcc -c test/ctect.c -o $(FLAG)/ctect.o
	
$(FLAG)/main.o: test/main.c
		gcc -c test/main.c -o $(FLAG)/main.o
