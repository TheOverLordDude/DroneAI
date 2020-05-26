struct droneObject
{
    bool isCrash;
    int checkSensorForCrash;
	float checkSensor(char sensorVal)
	{
		checkSensorForCrash = sensorVal;
		return 6.0;
	}
    bool dontCrash()
    {
		if(checkSensorForCrash == true)
		{
			isCrash = false;
			return true;
		}
		else
		{
			return false;
		}
    }
};

bool droneAI(droneObject drone)
{
	drone.checkSensor('\0');
    if (drone.isCrash == true)
    {
        bool success = drone.dontCrash();
        if (success)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return true;
    }
}