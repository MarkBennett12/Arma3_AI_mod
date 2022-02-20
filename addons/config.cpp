class CfgPatches
{	
    class AI_mod
    {
		name = "My AI Addon";
		author = "Me";
        requiredAddons[] = {};
        requiredVersion = 0.1;
        units[] = {};
        weapons[] = {};
    };
};

class CfgVehicles
{
    class Land;
    class Man: Land{};
    class CAManBase: Man
    {
        fsmDanger = "ai\scripts\my_danger.fsm";
        


    };
};
