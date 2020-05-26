struct droneObject
{
    bool headHunting;
    bool isCrash;
    int friendlyfireDisallowed = 0.5;
    int checkSensorForCrash;
    int heads = 0;
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
    void headHunt(char target)
    {
	    if(target == self)
	    {
		    break;
	    }
	    fire(target);
    }
    void fire(char target)
    {
	    heads++;
	    return heads;
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
