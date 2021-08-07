#if defined hitreg_included
	#endinput
#endif
#define hitreg_included

#define WEAPON_UNARMED 0
#define WEAPON_VEHICLE_M4 19
#define WEAPON_VEHICLE_MINIGUN 20
#define WEAPON_VEHICLE_ROCKETLAUNCHER 21
#define WEAPON_PISTOLWHIP 48
#define WEAPON_HELIBLADES 50
#define WEAPON_EXPLOSION 51
#define WEAPON_CARPARK 52
#define WEAPON_UNKNOWN 55

#if !defined MAX_FIRERATE_SAMPLES
	#define MAX_FIRERATE_SAMPLES 5
#endif

enum E_SHOT_INFO {
	e_Tick,
	e_Weapon,
	e_HitType,
	e_HitId,
	e_Hits,
	Float:e_X,
	Float:e_Y,
	Float:e_Z,
	Float:e_OX,
	Float:e_OY,
	Float:e_OZ,
	Float:e_HX,
	Float:e_HY,
	Float:e_HZ,
	Float:e_AIMX,
	Float:e_AIMY,
	Float:e_AIMZ,
	Float:e_Length,
	bool:e_Valid
}

static const DEFAULT_WEAPON_FIRERATE[] = {
	250, // 0 - Fist
	250, // 1 - Brass knuckles
	250, // 2 - Golf club
	250, // 3 - Nitestick
	250, // 4 - Knife
	250, // 5 - Bat
	250, // 6 - Shovel
	250, // 7 - Pool cue
	250, // 8 - Katana
	30, // 9 - Chainsaw
	250, // 10 - Dildo
	250, // 11 - Dildo 2
	250, // 12 - Vibrator
	250, // 13 - Vibrator 2
	250, // 14 - Flowers
	250, // 15 - Cane
	0, // 16 - Grenade
	0, // 17 - Teargas
	0, // 18 - Molotov
	20, // 19 - Vehicle M4 (custom)
	20, // 20 - Vehicle minigun (custom)
	0, // 21 - Vehicle rocket (custom)
	160, // 22 - Colt 45
	120, // 23 - Silenced
	120, // 24 - Deagle
	800, // 25 - Shotgun
	120, // 26 - Sawed-off
	120, // 27 - Spas
	50, // 28 - UZI
	90, // 29 - MP5
	90, // 30 - AK47
	90, // 31 - M4
	70, // 32 - Tec9
	800, // 33 - Cuntgun
	900, // 34 - Sniper
	0, // 35 - Rocket launcher
	0, // 36 - Heatseeker
	0, // 37 - Flamethrower
	20, // 38 - Minigun
	0, // 39 - Satchel
	0, // 40 - Detonator
	10, // 41 - Spraycan
	10, // 42 - Fire extinguisher
	0, // 43 - Camera
	0, // 44 - Night vision
	0, // 45 - Infrared
	0, // 46 - Parachute
	0, // 47 - Fake pistol
	400, // 48 - Pistol whip (custom)
	0, // 49 - Vehicle
	0, // 50 - Helicopter blades
	0, // 51 - Explosion
	0, // 52 - Car park (custom)
	0, // 53 - Drowning
	0  // 54 - Splat
};

static const Float:s_WeaponRange[] = {
	0.0, // 0 - Fist
	0.0, // 1 - Brass knuckles
	0.0, // 2 - Golf club
	0.0, // 3 - Nitestick
	0.0, // 4 - Knife
	0.0, // 5 - Bat
	0.0, // 6 - Shovel
	0.0, // 7 - Pool cue
	0.0, // 8 - Katana
	0.0, // 9 - Chainsaw
	0.0, // 10 - Dildo
	0.0, // 11 - Dildo 2
	0.0, // 12 - Vibrator
	0.0, // 13 - Vibrator 2
	0.0, // 14 - Flowers
	0.0, // 15 - Cane
	0.0, // 16 - Grenade
	0.0, // 17 - Teargas
	0.0, // 18 - Molotov
	90.0, // 19 - Vehicle M4 (custom)
	75.0, // 20 - Vehicle minigun (custom)
	0.0, // 21 - Vehicle rocket (custom)
	35.0, // 22 - Colt 45
	35.0, // 23 - Silenced
	35.0, // 24 - Deagle
	40.0, // 25 - Shotgun
	35.0, // 26 - Sawed-off
	40.0, // 27 - Spas
	35.0, // 28 - UZI
	45.0, // 29 - MP5
	70.0, // 30 - AK47
	90.0, // 31 - M4
	35.0, // 32 - Tec9
	100.0, // 33 - Cuntgun
	320.0, // 34 - Sniper
	0.0, // 35 - Rocket launcher
	0.0, // 36 - Heatseeker
	0.0, // 37 - Flamethrower
	75.0, // 38 - Minigun
	0.0, // 39 - Satchel
	0.0, // 40 - Detonator
	0.0, // 41 - Spraycan
	0.0, // 42 - Fire extinguisher
	0.0, // 43 - Camera
	0.0, // 44 - Night vision
	0.0, // 45 - Infrared
	0.0, // 46 - Parachute
	0.0, // 47 - Fake pistol
	0.0, // 48 - Pistol whip (custom)
	0.0, // 49 - Vehicle
	0.0, // 50 - Helicopter blades
	0.0, // 51 - Explosion
	0.0, // 52 - Car park (custom)
	0.0, // 53 - Drowning
	0.0  // 54 - Splat
};

static const bool:s_ValidDamageGiven[] = {
	true, // 0 - Fist
	true, // 1 - Brass knuckles
	true, // 2 - Golf club
	true, // 3 - Nitestick
	true, // 4 - Knife
	true, // 5 - Bat
	true, // 6 - Shovel
	true, // 7 - Pool cue
	true, // 8 - Katana
	true, // 9 - Chainsaw
	true, // 10 - Dildo
	true, // 11 - Dildo 2
	true, // 12 - Vibrator
	true, // 13 - Vibrator 2
	true, // 14 - Flowers
	true, // 15 - Cane
	false, // 16 - Grenade
	false, // 17 - Teargas
	false, // 18 - Molotov
	true, // 19 - Vehicle M4 (custom)
	true, // 20 - Vehicle minigun
	false, // 21 - Vehicle rocket (custom)
	true, // 22 - Colt 45
	true, // 23 - Silenced
	true, // 24 - Deagle
	true, // 25 - Shotgun
	true, // 26 - Sawed-off
	true, // 27 - Spas
	true, // 28 - UZI
	true, // 29 - MP5
	true, // 30 - AK47
	true, // 31 - M4
	true, // 32 - Tec9
	true, // 33 - Cuntgun
	true, // 34 - Sniper
	false, // 35 - Rocket launcher
	false, // 36 - Heatseeker
	true, // 37 - Flamethrower
	true, // 38 - Minigun
	false, // 39 - Satchel
	false, // 40 - Detonator
	true, // 41 - Spraycan
	true, // 42 - Fire extinguisher
	false, // 43 - Camera
	false, // 44 - Night vision
	false, // 45 - Infrared
	false, // 46 - Parachute
	false, // 47 - Fake pistol
	true, // 48 - Pistol whip (custom)
	false, // 49 - Vehicle
	false, // 50 - Helicopter blades
	false, // 51 - Explosion
	true, // 52 - Car park (custom)
	true, // 53 - Drowning
	false  // 54 - Splat
};

static const bool:s_ValidDamageTaken[] = {
	false, // 0 - Fist
	false, // 1 - Brass knuckles
	false, // 2 - Golf club
	false, // 3 - Nitestick
	false, // 4 - Knife
	false, // 5 - Bat
	false, // 6 - Shovel
	false, // 7 - Pool cue
	false, // 8 - Katana
	false, // 9 - Chainsaw
	false, // 10 - Dildo
	false, // 11 - Dildo 2
	false, // 12 - Vibrator
	false, // 13 - Vibrator 2
	false, // 14 - Flowers
	false, // 15 - Cane
	false, // 16 - Grenade
	false, // 17 - Teargas
	false, // 18 - Molotov
	false, // 19 - Vehicle M4 (custom)
	true, // 20 - Vehicle minigun (custom)
	false, // 21 - Vehicle rocket (custom)
	false, // 22 - Colt 45
	false, // 23 - Silenced
	false, // 24 - Deagle
	false, // 25 - Shotgun
	false, // 26 - Sawed-off
	false, // 27 - Spas
	false, // 28 - UZI
	false, // 29 - MP5
	false, // 30 - AK47
	false, // 31 - M4
	false, // 32 - Tec9
	false, // 33 - Cuntgun
	false, // 34 - Sniper
	false, // 35 - Rocket launcher
	false, // 36 - Heatseeker
	true, // 37 - Flamethrower
	true, // 38 - Minigun
	false, // 39 - Satchel
	false, // 40 - Detonator
	false, // 41 - Spraycan
	false, // 42 - Fire extinguisher
	false, // 43 - Camera
	false, // 44 - Night vision
	false, // 45 - Infrared
	false, // 46 - Parachute
	false, // 47 - Fake pistol
	false, // 48 - Pistol whip (custom)
	true, // 49 - Vehicle
	true, // 50 - Helicopter blades
	true, // 51 - Explosion
	true, // 52 - Car park (custom)
	true, // 53 - Drowning
	true  // 54 - Splat
};

static HitReg@lastExplosive[MAX_PLAYERS][2];
static Float:HitReg@weaponDamage[MAX_PLAYERS][56];

static HitReg@playerTeam[MAX_PLAYERS];
static HitReg@playerDeathData[MAX_PLAYERS][4];

static HitReg@knifeKillTimer[MAX_PLAYERS];

static HitReg@lastShotTickCount[MAX_PLAYERS][10];
static HitReg@lastShotWeapon[MAX_PLAYERS][sizeof(HitReg@lastShotTickCount[])];
static HitReg@lastShotID[MAX_PLAYERS];
static HitReg@numShotsFired[MAX_PLAYERS];

static HitReg@lastHitTickCount[MAX_PLAYERS][10];
static HitReg@lastHitWeapon[MAX_PLAYERS][sizeof(HitReg@lastHitTickCount[])];
static HitReg@lastHitID[MAX_PLAYERS];
static HitReg@numHitsIssued[MAX_PLAYERS];

static s_DeathTimer[MAX_PLAYERS];

static Float:playerHealth[MAX_PLAYERS];
static Float:playerArmour[MAX_PLAYERS];

static s_LastVehicleShooter[MAX_VEHICLES + 1][2];

static s_LastUpdate[MAX_PLAYERS];

static FIXES_gsLastAnimation[MAX_PLAYERS];

static s_LastShot[MAX_PLAYERS][E_SHOT_INFO];

static s_TrueDeath[MAX_PLAYERS][6];

#if defined OnPlayerDamage
	forward OnPlayerDamage(playerid, issuerid, weaponid, Float:amount, bodypart);
#endif

forward HitReg_OnPlayerKnifed(playerid, issuerid);
forward WC_DelayedDeath(playerid);
forward HitReg_TrueDeath(playerid);

native WC_IsValidVehicle(vehicleid) = IsValidVehicle;

/*
 * Internal functions
 */

static HitReg_GetAverageFireRate(lastshot, ticks[], weapons[], size, &bool:multiple_weapons) {
	new total = 0;

	multiple_weapons = false;

	for (new i = (MAX_FIRERATE_SAMPLES - 2); i >= 0; i--) {
		new prev_idx = (lastshot - i - 1) % size;

		// JIT plugin fix
		if (prev_idx < 0)
			prev_idx += size;

		new this_idx = (lastshot - i) % size;

		// JIT plugin fix
		if (this_idx < 0)
			this_idx += size;

		multiple_weapons = (weapons[prev_idx] != weapons[this_idx]);

		total += (ticks[this_idx] - ticks[prev_idx]);
	}
	
	new res = total / (MAX_FIRERATE_SAMPLES - 1);
	
	if (res <= 0 && res != -1) {
		return 0;
	}

	return res;
}

static bool:HitReg_IsPlayerSpawned(playerid) {
	if (HitReg@knifeKillTimer[playerid] != -1) {
		return false;
	}

	switch (GetPlayerState(playerid)) {
		case PLAYER_STATE_ONFOOT .. PLAYER_STATE_PASSENGER,
		     PLAYER_STATE_SPAWNED: {
			return true;
		}
	}

	return false;
}

static bool:HitReg_ProcessDamage(playerid, issuerid, &Float:amount, &weaponid, &bodypart) {
	if (floatcmp(amount, 0.0) < 0) {
		return false;
	}

	switch (amount) {
		case 3.63000011444091796875,
		     5.940000057220458984375,
		     5.610000133514404296875: {
			amount = 2.6400001049041748046875;
		}

		case 3.30000019073486328125: {
			if (weaponid != WEAPON_SHOTGUN && weaponid != WEAPON_SAWEDOFF) {
				amount = 2.6400001049041748046875;
			}
		}

		case 4.950000286102294921875: {
			if ((WEAPON_UNARMED <= weaponid <= WEAPON_KATANA) || (WEAPON_DILDO <= weaponid <= WEAPON_CANE) || weaponid == WEAPON_PISTOLWHIP) {
				amount = 2.6400001049041748046875;
			}
		}

		case 6.270000457763671875,
		     6.93000030517578125,
		     7.2600002288818359375,
		     7.9200000762939453125,
		     8.5799999237060546875,
		     9.24000072479248046875,
		     11.88000011444091796875,
		     11.22000026702880859375: {
			amount = 2.6400001049041748046875;
		}

		case 9.90000057220458984375: {
			switch (weaponid) {
				case WEAPON_VEHICLE, WEAPON_VEHICLE_M4, WEAPON_AK47,
				     WEAPON_M4, WEAPON_SHOTGUN, WEAPON_SAWEDOFF, WEAPON_SHOTGSPA: {}

				default: {
					amount = 6.6000003814697265625;
				}
			}
		}
	}

    if (weaponid == WEAPON_M4 || weaponid == WEAPON_MINIGUN) {
		if (IsPlayerInAnyVehicle(issuerid) && GetPlayerVehicleSeat(issuerid) == 0) {
		    weaponid = (weaponid == WEAPON_M4) ? (WEAPON_VEHICLE_M4) : (WEAPON_VEHICLE_MINIGUN);
		}
	}

	switch (weaponid) {
		case WEAPON_FLAMETHROWER, WEAPON_DROWN, WEAPON_CARPARK,
		     WEAPON_SPRAYCAN, WEAPON_FIREEXTINGUISHER: {
			if (weaponid == WEAPON_DROWN) {
				if (floatcmp(amount, 10.0) > 0) amount = 10.0;
			}
			else if (floatcmp(amount, 1.0) > 0) {
				amount = 1.0;
			}

			if (_:HitReg@weaponDamage[issuerid][weaponid] != _:1.0) {
				amount *= HitReg@weaponDamage[issuerid][weaponid];
			}

			if (weaponid == WEAPON_SPRAYCAN || weaponid == WEAPON_FIREEXTINGUISHER || weaponid == WEAPON_CARPARK) {
				new Float:x, Float:y, Float:z, Float:dist;
				GetPlayerPos(issuerid, x, y, z);
				dist = GetPlayerDistanceFromPoint(playerid, x, y, z);

				if (floatcmp(dist, 15.0) > 0) {
					return false;
				}
			}

			return true;
		}
	}

	if (weaponid == WEAPON_PARACHUTE) {
		weaponid = WEAPON_UNARMED;
	}
	
	switch (weaponid) {
		case WEAPON_COLT45 .. WEAPON_SNIPER,
		     WEAPON_MINIGUN, WEAPON_SPRAYCAN, WEAPON_FIREEXTINGUISHER: {
			if (_:amount == _:2.6400001049041748046875) {
				bodypart = weaponid;
				weaponid = WEAPON_PISTOLWHIP;
			}
		}
	}

	new bool:melee = ((WEAPON_UNARMED <= weaponid <= WEAPON_KATANA) || (WEAPON_DILDO <= weaponid <= WEAPON_CANE) || weaponid == WEAPON_PISTOLWHIP);

	if (melee && IsPlayerInAnyVehicle(issuerid)) {
		return false;
	}

	if (weaponid != WEAPON_PISTOLWHIP) {
		switch (amount) {
			case 1.32000005245208740234375,
			     1.650000095367431640625,
			     1.980000019073486328125,
			     2.3100001811981201171875,
			     2.6400001049041748046875,
			     2.9700000286102294921875,
			     3.96000003814697265625,
			     4.28999996185302734375,
			     4.62000036239624023437,
			     5.280000209808349609375: {
				if (!melee) {
					weaponid = WEAPON_UNARMED;
					melee = true;
				}
			}

			case 6.6000003814697265625: {
				if (!melee) {
					switch (weaponid) {
						case WEAPON_UZI, WEAPON_TEC9, WEAPON_CHAINSAW,
						     WEAPON_SHOTGUN, WEAPON_SAWEDOFF: {}

						default: {
							weaponid = WEAPON_UNARMED;
							melee = true;
						}
					}
				}
			}

			case 54.12000274658203125: {
				if (!melee) {
					melee = true;
					weaponid = WEAPON_UNARMED;
					amount = 1.32000005245208740234375;
				}

				if (GetPlayerFightingStyle(issuerid) != FIGHT_STYLE_KNEEHEAD) {
					return false;
				}
			}

			default: {
				if (melee) {
					return false;
				}
			}
		}
	}

	if (melee) {
		new Float:x, Float:y, Float:z, Float:dist;
		GetPlayerPos(issuerid, x, y, z);
		dist = GetPlayerDistanceFromPoint(playerid, x, y, z);

		if (floatcmp(dist, 15.0) > 0) {
			return false;
		}
	}

	new Float:bullets;

	switch (weaponid) {
		case WEAPON_SHOTGSPA: {
			bullets = amount / 4.950000286102294921875;

			if (floatcmp(8.0 - bullets, -0.05) < 0) {
				return false;
			}
		}

		case WEAPON_SHOTGUN, WEAPON_SAWEDOFF: {
			bullets = amount / 3.30000019073486328125;

			if (floatcmp(15.0 - bullets, -0.05) < 0) {
				return false;
			}
		}
	}

	if (_:bullets) {
		new Float:f = floatfract(bullets);

		if (floatcmp(f, 0.01) > 0 && floatcmp(f, 0.99) < 0) {
			return false;
		}

		amount /= bullets;
	}

	if (weaponid == WEAPON_CHAINSAW) {
		switch (amount) {
			case 6.6000003814697265625,
			     13.5300006866455078125,
			     16.1700000762939453125,
			     26.40000152587890625,
			     27.060001373291015625: {}

			default: {
				return false;
			}
		}
	}

	if (weaponid == WEAPON_DEAGLE) {
		switch (amount) {
			case 46.200000762939453125,
			     23.1000003814697265625: {}

			default: {
				return false;
			}
		}
	}

	new Float:def_amount = 0.0;

	switch (weaponid) {
		case WEAPON_COLT45,
		     WEAPON_MP5: def_amount = 8.25;
		case WEAPON_SILENCED: def_amount = 13.200000762939453125;
		case WEAPON_UZI,
		     WEAPON_TEC9: def_amount = 6.6000003814697265625;
		case WEAPON_AK47,
		     WEAPON_M4,
		     WEAPON_VEHICLE_M4: def_amount = 9.90000057220458984375;
		case WEAPON_RIFLE: def_amount = 24.7500019073486328125;
		case WEAPON_SNIPER: def_amount = 41.25;
		case WEAPON_MINIGUN,
		     WEAPON_VEHICLE_MINIGUN: def_amount = 46.200000762939453125;
		case WEAPON_VEHICLE: def_amount = 9.90000057220458984375;
	}

	if (_:def_amount && _:def_amount != _:amount) {
		return false;
	}

	switch (weaponid) {
		case WEAPON_UNARMED..WEAPON_KATANA,
		 	 WEAPON_DILDO..WEAPON_CANE,
 			 WEAPON_PISTOLWHIP: {
			amount *= HitReg@weaponDamage[issuerid][weaponid];
		}
		
		case WEAPON_CHAINSAW: {
			amount *= HitReg@weaponDamage[issuerid][weaponid];
		}

		case WEAPON_GRENADE: {
			amount *= HitReg@weaponDamage[issuerid][weaponid];
		}
		
		case WEAPON_SHOTGSPA, WEAPON_SHOTGUN, WEAPON_SAWEDOFF: {
			amount = (bullets * HitReg@weaponDamage[issuerid][weaponid]);
		}

		case WEAPON_VEHICLE_M4,
			 WEAPON_VEHICLE_MINIGUN: {
			amount = HitReg@weaponDamage[issuerid][weaponid];
		}

		case WEAPON_COLT45..WEAPON_DEAGLE,
			 WEAPON_UZI..WEAPON_SNIPER,
			 WEAPON_MINIGUN: {
			amount = HitReg@weaponDamage[issuerid][weaponid];
		}

		case WEAPON_ROCKETLAUNCHER,
			 WEAPON_HEATSEEKER,
			 WEAPON_VEHICLE_ROCKETLAUNCHER,
			 WEAPON_EXPLOSION: {
			amount *= HitReg@weaponDamage[issuerid][weaponid];
		}

		case WEAPON_VEHICLE: {
			amount = HitReg@weaponDamage[issuerid][weaponid];
		}

		case WEAPON_HELIBLADES: {
			amount = HitReg@weaponDamage[issuerid][weaponid];
		}
	}

	return true;
}

static IsBulletWeapon(weaponid)
{
	return (WEAPON_COLT45 <= weaponid <= WEAPON_SNIPER) || weaponid == WEAPON_MINIGUN;
}

static IsPlayerPaused(playerid)
{
	return (GetTickCount() - s_LastUpdate[playerid] > 2000);
}

static Float:internal_WC_DCTTL(Float:CamX, Float:CamY, Float:CamZ, Float:ObjX, Float:ObjY, Float:ObjZ, Float:FrX, Float:FrY, Float:FrZ)
{
   	static Float:TGTDistance, Float:tmpX, Float:tmpY, Float:tmpZ;
    TGTDistance = floatsqroot((CamX - ObjX) * (CamX - ObjX) + (CamY - ObjY) * (CamY - ObjY) + (CamZ - ObjZ) * (CamZ - ObjZ));

    tmpX = FrX * TGTDistance + CamX;
    tmpY = FrY * TGTDistance + CamY;
    tmpZ = FrZ * TGTDistance + CamZ;

    return floatsqroot((tmpX - ObjX) * (tmpX - ObjX) + (tmpY - ObjY) * (tmpY - ObjY) + (tmpZ - ObjZ) * (tmpZ - ObjZ));
}

static Float:internal_WC_GPATP(Float:x2, Float:y2, Float:X, Float:Y)
{
	static Float:DX, Float:DY, Float:angle;

	DX = floatabs(floatsub(x2, X));
	DY = floatabs(floatsub(y2, Y));

  	if (floatcmp(DY, 0.0) == 0 || floatcmp(DX, 0.0) == 0)
  	{
		if(floatcmp(DY, 0.0) == 0 && floatcmp(DX, 0.0) > 0) angle = 0.0;
    	else if(floatcmp(DY, 0.0) == 0 && floatcmp(DX, 0.0) < 0) angle = 180.0;
    	else if(floatcmp(DY, 0.0) > 0 && floatcmp(DX, 0.0) == 0) angle = 90.0;
    	else if(floatcmp(DY, 0.0) < 0 && floatcmp(DX, 0.0) == 0) angle = 270.0;
    	else if(floatcmp(DY, 0.0) == 0 && floatcmp(DX, 0.0) == 0) angle = 0.0;
  	}
  	else
	{
    	angle = atan(DX / DY);

    	if(floatcmp(X, x2) > 0 && floatcmp(Y, y2) <= 0) angle += 90.0;
    	else if(floatcmp(X, x2) <= 0 && floatcmp(Y, y2) < 0) angle = floatsub(90.0, angle);
    	else if(floatcmp(X, x2) < 0 && floatcmp(Y, y2) >= 0) angle -= 90.0;
    	else if(floatcmp(X, x2) >= 0 && floatcmp(Y, y2) > 0) angle = floatsub(270.0, angle);
  	}
  	return floatadd(angle, 90.0);
}

static internal_WC_IsCameraAimingAt(weaponid, Float:x, Float:y, Float:z, Float:vector_x, Float:vector_y, Float:vector_z, Float:camera_x, Float:camera_y, Float:camera_z, Float:radius)
{
   	static Float:vertical, Float:horizontal;
    switch (weaponid)
    {
		case 34, 35, 36:
		{
			if (internal_WC_DCTTL(camera_x, camera_y, camera_z, x, y, z, vector_x, vector_y, vector_z) < radius) return true;
			return false;
        }
        case 30, 31: {vertical = 4.0; horizontal = -1.6;}
        case 33: {vertical = 2.7; horizontal = -1.0;}
        default: {vertical = 6.0; horizontal = -2.2;}
	}
	new Float:angle = internal_WC_GPATP(0.0, 0.0, floatsqroot(vector_x * vector_x + vector_y * vector_y), vector_z) - 270.0;
	new Float:resize_x, Float:resize_y, Float:resize_z = floatsin(angle + vertical, degrees);

	internal_WC_GXYIFOP(resize_x, resize_y, internal_WC_GPATP(0.0, 0.0, vector_x, vector_y) + horizontal, floatcos(angle + vertical, degrees));
    if (internal_WC_DCTTL(camera_x, camera_y, camera_z, x, y, z, resize_x, resize_y, resize_z) < radius) return true;
	return false;
}

static internal_WC_GXYIFOP(&Float:x, &Float:y, Float:angle, Float:distance)
{
	x += (distance * floatsin(-angle, degrees));
	y += (distance * floatcos(-angle, degrees));
}

public HitReg_OnPlayerKnifed(playerid, issuerid) {
	HitReg@playerDeathData[playerid][0] = 1;
	
	HitReg@knifeKillTimer[playerid] = -1;
	
	playerArmour[playerid] = 0.0;
	playerHealth[playerid] = -1.0;
	
	SetPlayerHealth(playerid, playerHealth[playerid]);
	SetPlayerArmour(playerid, playerArmour[playerid]);
	
	if (s_TrueDeath[playerid][0] != -1) {
		KillTimer(s_TrueDeath[playerid][0]);
		s_TrueDeath[playerid][0] = -1;
	}
	
	s_TrueDeath[playerid][0] = SetTimerEx("HitReg_TrueDeath", 3000, false, "i", playerid);
	
	return 1;
}

public WC_DelayedDeath(playerid) {
	new tick = GetTickCount();
	
	if (tick - HitReg@playerDeathData[playerid][3] > 4000 && HitReg@playerDeathData[playerid][3] != 0) {
		SetPlayerArmour(playerid, 0.0);
		SetPlayerHealth(playerid, 100.0);
		
		HitReg@playerDeathData[playerid][3] = 0;
	}
	
	s_DeathTimer[playerid] = SetTimerEx("WC_DelayedDeath", 1000, false, "i", playerid);
	
	return 1;
}

public HitReg_TrueDeath(playerid) {
	if (s_TrueDeath[playerid][1] != 1) {
		OnPlayerDeath(playerid, HitReg@playerDeathData[playerid][1], HitReg@playerDeathData[playerid][2]);
		SpawnPlayer(playerid);
		
		s_TrueDeath[playerid][0] = -1;
		s_TrueDeath[playerid][1] = 0;
	}
	
	return 1;
}

/*
 * Hooked callbacks
 */

public OnGameModeInit()
{
	for (new i = 0; i < sizeof(s_LastVehicleShooter); i++) {
		s_LastVehicleShooter[i][0] = INVALID_PLAYER_ID;
		s_LastVehicleShooter[i][1] = 0;
	}
	
	#if defined WC_OnGameModeInit
		return WC_OnGameModeInit();
	#else
		return 1;
	#endif
}
#if defined _ALS_OnGameModeInit
	#undef OnGameModeInit
#else
	#define _ALS_OnGameModeInit
#endif
#define OnGameModeInit WC_OnGameModeInit
#if defined WC_OnGameModeInit
	forward WC_OnGameModeInit();
#endif

public OnPlayerConnect(playerid) {
	HitReg@lastExplosive[playerid][0] = WEAPON_UNARMED;
	HitReg@lastExplosive[playerid][1] = 0;
	
	HitReg@weaponDamage[playerid][0] = 1.0; // 0 - Fist
	HitReg@weaponDamage[playerid][1] = 1.0; // 1 - Brass knuckles
	HitReg@weaponDamage[playerid][2] = 1.0; // 2 - Golf club
	HitReg@weaponDamage[playerid][3] = 1.0; // 3 - Nitestick
	HitReg@weaponDamage[playerid][4] = 1.0; // 4 - Knife
	HitReg@weaponDamage[playerid][5] = 1.0; // 5 - Bat
	HitReg@weaponDamage[playerid][6] = 1.0; // 6 - Shovel
	HitReg@weaponDamage[playerid][7] = 1.0; // 7 - Pool cue
	HitReg@weaponDamage[playerid][8] = 1.0; // 8 - Katana
	HitReg@weaponDamage[playerid][9] = 1.0; // 9 - Chainsaw
	HitReg@weaponDamage[playerid][10] = 1.0; // 10 - Dildo
	HitReg@weaponDamage[playerid][11] = 1.0; // 11 - Dildo 2
	HitReg@weaponDamage[playerid][12] = 1.0; // 12 - Vibrator
	HitReg@weaponDamage[playerid][13] = 1.0; // 13 - Vibrator 2
	HitReg@weaponDamage[playerid][14] = 1.0; // 14 - Flowers
	HitReg@weaponDamage[playerid][15] = 1.0; // 15 - Cane
	HitReg@weaponDamage[playerid][16] = 82.5; // 16 - Grenade
	HitReg@weaponDamage[playerid][17] = 0.0; // 17 - Teargas
	HitReg@weaponDamage[playerid][18] = 1.0; // 18 - Molotov
	HitReg@weaponDamage[playerid][19] = 9.9; // 19 - Vehicle M4 (custom)
	HitReg@weaponDamage[playerid][20] = 46.2; // 20 - Vehicle minigun (custom)
	HitReg@weaponDamage[playerid][21] = 82.5; // 21 - Vehicle rocket (custom)
	HitReg@weaponDamage[playerid][22] = 8.25; // 22 - Colt 45
	HitReg@weaponDamage[playerid][23] = 13.2; // 23 - Silenced
	HitReg@weaponDamage[playerid][24] = 46.2; // 24 - Deagle
	HitReg@weaponDamage[playerid][25] = 3.3; // 25 - Shotgun
	HitReg@weaponDamage[playerid][26] = 3.3; // 26 - Sawed-off
	HitReg@weaponDamage[playerid][27] = 4.95; // 27 - Spas
	HitReg@weaponDamage[playerid][28] = 6.6; // 28 - UZI
	HitReg@weaponDamage[playerid][29] = 8.25; // 29 - MP5
	HitReg@weaponDamage[playerid][30] = 9.9; // 30 - AK47
	HitReg@weaponDamage[playerid][31] = 9.9; // 31 - M4
	HitReg@weaponDamage[playerid][32] = 6.6; // 32 - Tec9
	HitReg@weaponDamage[playerid][33] = 24.75; // 33 - Cuntgun
	HitReg@weaponDamage[playerid][34] = 41.25; // 34 - Sniper
	HitReg@weaponDamage[playerid][35] = 82.5; // 35 - Rocket launcher
	HitReg@weaponDamage[playerid][36] = 82.5; // 36 - Heatseeker
	HitReg@weaponDamage[playerid][37] = 1.0; // 37 - Flamethrower
	HitReg@weaponDamage[playerid][38] = 46.2; // 38 - Minigun
	HitReg@weaponDamage[playerid][39] = 82.5; // 39 - Satchel
	HitReg@weaponDamage[playerid][40] = 0.0; // 40 - Detonator
	HitReg@weaponDamage[playerid][41] = 0.33; // 41 - Spraycan
	HitReg@weaponDamage[playerid][42] = 0.33; // 42 - Fire extinguisher
	HitReg@weaponDamage[playerid][43] = 0.0; // 43 - Camera
	HitReg@weaponDamage[playerid][44] = 0.0; // 44 - Night vision
	HitReg@weaponDamage[playerid][45] = 0.0; // 45 - Infrared
	HitReg@weaponDamage[playerid][46] = 0.0; // 46 - Parachute
	HitReg@weaponDamage[playerid][47] = 0.0; // 47 - Fake pistol
	HitReg@weaponDamage[playerid][48] = 2.64; // 48 - Pistol whip (custom)
	HitReg@weaponDamage[playerid][49] = 9.9; // 49 - Vehicle
	HitReg@weaponDamage[playerid][50] = 330.0; // 50 - Helicopter blades
	HitReg@weaponDamage[playerid][51] = 82.5; // 51 - Explosion
	HitReg@weaponDamage[playerid][52] = 1.0; // 52 - Car park (custom)
	HitReg@weaponDamage[playerid][53] = 1.0; // 53 - Drowning
	HitReg@weaponDamage[playerid][54] = 165.0; // 54 - Splat
	
	HitReg@playerTeam[playerid] = NO_TEAM;
	
	HitReg@playerDeathData[playerid][0] = 0;
	HitReg@playerDeathData[playerid][1] = INVALID_PLAYER_ID;
	HitReg@playerDeathData[playerid][2] = WEAPON_UNKNOWN;
	HitReg@playerDeathData[playerid][3] = 0;
	
	HitReg@knifeKillTimer[playerid] = -1;
	
	for (new i = 0; i < sizeof(HitReg@lastShotTickCount[]); i++) {
		HitReg@lastShotTickCount[playerid][i] = 0;
		HitReg@lastShotWeapon[playerid][i] = WEAPON_UNARMED;
	}
	HitReg@lastShotID[playerid] = 0;
	HitReg@numShotsFired[playerid] = 0;
	
	for (new i = 0; i < sizeof(HitReg@lastHitTickCount[]); i++) {
		HitReg@lastHitTickCount[playerid][i] = 0;
		HitReg@lastHitWeapon[playerid][i] = WEAPON_UNARMED;
	}
	HitReg@lastHitID[playerid] = 0;
	HitReg@numHitsIssued[playerid] = 0;
	
	s_DeathTimer[playerid] = SetTimerEx("WC_DelayedDeath", 1000, false, "i", playerid);
	
	playerHealth[playerid] = 100.0;
	playerArmour[playerid] = 0.0;
	
	SetPlayerHealth(playerid, playerHealth[playerid]);
	SetPlayerArmour(playerid, playerArmour[playerid]);
	
	s_LastUpdate[playerid] = GetTickCount();
	
	FIXES_gsLastAnimation[playerid] = 0;
	
	s_LastShot[playerid][e_Tick] = 0;
	
	s_TrueDeath[playerid][0] = -1;
	s_TrueDeath[playerid][1] = 0;
	s_TrueDeath[playerid][2] = 0;
	s_TrueDeath[playerid][3] = INVALID_VEHICLE_ID;
	s_TrueDeath[playerid][4] = 0;
	s_TrueDeath[playerid][5] = 0;
	
	ApplyAnimation(playerid, "PED", "null", 0.0, 0, 0, 0, 1, 1, 0);
	
	SetPlayerTeam(playerid, 0x100);
	
	#if defined HitReg_OnPlayerConnect
		return HitReg_OnPlayerConnect(playerid);
	#else
		return 1;
	#endif
}
#if defined _ALS_OnPlayerConnect
    #undef OnPlayerConnect
#else
    #define _ALS_OnPlayerConnect
#endif
#define OnPlayerConnect HitReg_OnPlayerConnect
#if defined HitReg_OnPlayerConnect
	forward HitReg_OnPlayerConnect(playerid);
#endif

public OnPlayerDisconnect(playerid, reason)
{
	if (s_TrueDeath[playerid][0] != -1) {
		OnPlayerDeath(playerid, HitReg@playerDeathData[playerid][1], HitReg@playerDeathData[playerid][2]);
		KillTimer(s_TrueDeath[playerid][0]);
		s_TrueDeath[playerid][0] = -1;
	}
	
	#if defined WC_OnPlayerDisconnect
		WC_OnPlayerDisconnect(playerid, reason);
	#endif
	
	if (HitReg@knifeKillTimer[playerid] != -1) {
		KillTimer(HitReg@knifeKillTimer[playerid]);
		HitReg@knifeKillTimer[playerid] = -1;
	}
	
	KillTimer(s_DeathTimer[playerid]);
	
	for (new i = 0; i < sizeof(s_LastVehicleShooter); i++) {
		if (s_LastVehicleShooter[i][0] == playerid) {
			s_LastVehicleShooter[i][0] = INVALID_PLAYER_ID;
			s_LastVehicleShooter[i][1] = 0;
		}
	}
	
	for(new ac_i = GetPlayerPoolSize(); ac_i >= 0; --ac_i) {
		if(IsPlayerConnected(ac_i)) {
			if (HitReg@playerDeathData[ac_i][1] == playerid) {
				HitReg@playerDeathData[ac_i][1] = INVALID_PLAYER_ID;
			}
		}
	}
	
	return 1;
}
#if defined _ALS_OnPlayerDisconnect
	#undef OnPlayerDisconnect
#else
	#define _ALS_OnPlayerDisconnect
#endif
#define OnPlayerDisconnect WC_OnPlayerDisconnect
#if defined WC_OnPlayerDisconnect
	forward WC_OnPlayerDisconnect(playerid, reason);
#endif

public OnPlayerSpawn(playerid) {
	HitReg@playerDeathData[playerid][0] = 0;
	HitReg@playerDeathData[playerid][1] = INVALID_PLAYER_ID;
	HitReg@playerDeathData[playerid][2] = WEAPON_UNKNOWN;
	HitReg@playerDeathData[playerid][3] = 0;
	
	if (HitReg@knifeKillTimer[playerid] != -1) {
		KillTimer(HitReg@knifeKillTimer[playerid]);
		HitReg@knifeKillTimer[playerid] = -1;
	}
	
	if (s_TrueDeath[playerid][0] != -1) {
		KillTimer(s_TrueDeath[playerid][0]);
		s_TrueDeath[playerid][0] = -1;
	}
	
	s_TrueDeath[playerid][1] = 0;
	s_TrueDeath[playerid][2] = 0;
	s_TrueDeath[playerid][3] = INVALID_VEHICLE_ID;
	s_TrueDeath[playerid][4] = 0;
	s_TrueDeath[playerid][5] = 0;
	
	playerHealth[playerid] = 100.0;
	playerArmour[playerid] = 0.0;
	
	SetPlayerHealth(playerid, playerHealth[playerid]);
	SetPlayerArmour(playerid, playerArmour[playerid]);
	
	s_LastUpdate[playerid] = GetTickCount();
	
	SetPlayerTeam(playerid, 0x100);
	
	#if defined HitReg_OnPlayerSpawn
		return HitReg_OnPlayerSpawn(playerid);
	#else
		return 1;
	#endif
}
#if defined _ALS_OnPlayerSpawn
    #undef OnPlayerSpawn
#else
    #define _ALS_OnPlayerSpawn
#endif
#define OnPlayerSpawn HitReg_OnPlayerSpawn
#if defined HitReg_OnPlayerSpawn
	forward HitReg_OnPlayerSpawn(playerid);
#endif

public OnPlayerDeath(playerid, killerid, reason) {
	new tick = GetTickCount();
	
	static sAnimlib[32], sAnimname[32];
	GetAnimationName(FIXES_gsLastAnimation[playerid], sAnimlib, sizeof(sAnimlib), sAnimname, sizeof(sAnimname));
	if (strcmp(sAnimlib, "PED", true))
	{
		ClearAnimations(playerid);
	}
	
	if (HitReg@playerDeathData[playerid][0] == 0) {
		new vehicleid = GetPlayerVehicleID(playerid);
		
		if (vehicleid) {
			HitReg@playerDeathData[playerid][0] = 1;
			HitReg@playerDeathData[playerid][1] = INVALID_PLAYER_ID;
			HitReg@playerDeathData[playerid][2] = WEAPON_EXPLOSION;
			
			if (!(HitReg@playerTeam[playerid] != NO_TEAM && HitReg@playerTeam[s_LastVehicleShooter[vehicleid][0]] != NO_TEAM &&
			HitReg@playerTeam[playerid] == HitReg@playerTeam[s_LastVehicleShooter[vehicleid][0]] && tick - s_LastVehicleShooter[vehicleid][1] < 6000)) {
				HitReg@playerDeathData[playerid][1] = (playerid == s_LastVehicleShooter[vehicleid][0]) ? INVALID_PLAYER_ID : s_LastVehicleShooter[vehicleid][0];
			}
			
			#if defined OnPlayerDamage
				OnPlayerDamage(playerid, HitReg@playerDeathData[playerid][1], HitReg@playerDeathData[playerid][2], playerHealth[playerid], 3);
			#endif
			
			playerHealth[playerid] = -1.0;
			playerArmour[playerid] = 0.0;
			
			s_LastVehicleShooter[vehicleid][0] = INVALID_PLAYER_ID;
			s_LastVehicleShooter[vehicleid][1] = 0;
		} else {
			if (s_TrueDeath[playerid][3] != INVALID_VEHICLE_ID && tick - s_TrueDeath[playerid][4] < 2000) {
				HitReg@playerDeathData[playerid][0] = 1;
				HitReg@playerDeathData[playerid][1] = INVALID_PLAYER_ID;
				HitReg@playerDeathData[playerid][2] = WEAPON_EXPLOSION;
				
				if (!(HitReg@playerTeam[playerid] != NO_TEAM && HitReg@playerTeam[s_LastVehicleShooter[s_TrueDeath[playerid][3]][0]] != NO_TEAM &&
				HitReg@playerTeam[playerid] == HitReg@playerTeam[s_LastVehicleShooter[s_TrueDeath[playerid][3]][0]] && tick - s_LastVehicleShooter[s_TrueDeath[playerid][3]][1] < 6000)) {
					HitReg@playerDeathData[playerid][1] = (playerid == s_LastVehicleShooter[s_TrueDeath[playerid][3]][0]) ? INVALID_PLAYER_ID :
					s_LastVehicleShooter[s_TrueDeath[playerid][3]][0];
				}
				
				#if defined OnPlayerDamage
					OnPlayerDamage(playerid, HitReg@playerDeathData[playerid][1], HitReg@playerDeathData[playerid][2], playerHealth[playerid], 3);
				#endif
				
				playerHealth[playerid] = -1.0;
				playerArmour[playerid] = 0.0;
				
				s_LastVehicleShooter[s_TrueDeath[playerid][3]][0] = INVALID_PLAYER_ID;
				s_LastVehicleShooter[s_TrueDeath[playerid][3]][1] = 0;
				
				s_TrueDeath[playerid][3] = INVALID_VEHICLE_ID;
				s_TrueDeath[playerid][4] = 0;
			} else {
				if (s_TrueDeath[playerid][5]) {
					HitReg@playerDeathData[playerid][0] = 1;
					HitReg@playerDeathData[playerid][1] = INVALID_PLAYER_ID;
					HitReg@playerDeathData[playerid][2] = WEAPON_COLLISION;
					
					#if defined OnPlayerDamage
						OnPlayerDamage(playerid, HitReg@playerDeathData[playerid][1], HitReg@playerDeathData[playerid][2], playerHealth[playerid], 3);
					#endif
					
					playerHealth[playerid] = -1.0;
					playerArmour[playerid] = 0.0;
					
					s_TrueDeath[playerid][5] = 0;
				} else {
					HitReg@playerDeathData[playerid][0] = 1;
					HitReg@playerDeathData[playerid][1] = INVALID_PLAYER_ID;
					HitReg@playerDeathData[playerid][2] = WEAPON_UNKNOWN;
					
					#if defined OnPlayerDamage
						OnPlayerDamage(playerid, HitReg@playerDeathData[playerid][1], HitReg@playerDeathData[playerid][2], playerHealth[playerid], 3);
					#endif
					
					playerHealth[playerid] = -1.0;
					playerArmour[playerid] = 0.0;
				}
			}
		}
	}
	
	if (HitReg@knifeKillTimer[playerid] != -1) {
		KillTimer(HitReg@knifeKillTimer[playerid]);
		HitReg@knifeKillTimer[playerid] = -1;
	}
	
	HitReg@playerDeathData[playerid][3] = tick;
	
	killerid = HitReg@playerDeathData[playerid][1];
	reason = HitReg@playerDeathData[playerid][2];
	
	if (killerid != INVALID_PLAYER_ID && !IsPlayerStreamedIn(killerid, playerid) && !IsPlayerPaused(playerid)) {
		killerid = INVALID_PLAYER_ID;
	} else if (killerid != INVALID_PLAYER_ID && !IsPlayerStreamedIn(killerid, playerid) && IsPlayerPaused(playerid)) {
		if (!IsPlayerConnected(killerid)) {
			killerid = INVALID_PLAYER_ID;
		}
	}
	
	if (reason < WEAPON_UNARMED || reason > WEAPON_UNKNOWN) {
		reason = WEAPON_UNKNOWN;
	}
	
	if (reason == WEAPON_PARACHUTE) {
		reason = WEAPON_COLLISION;
	}
	
	s_TrueDeath[playerid][1] = 1;
	
	if (s_TrueDeath[playerid][0] != -1) {
		KillTimer(s_TrueDeath[playerid][0]);
		s_TrueDeath[playerid][0] = -1;
	}
	
	#if defined HitReg_OnPlayerDeath
		return HitReg_OnPlayerDeath(playerid, killerid, reason);
	#else
		return 1;
	#endif
}
#if defined _ALS_OnPlayerDeath
    #undef OnPlayerDeath
#else
    #define _ALS_OnPlayerDeath
#endif
#define OnPlayerDeath HitReg_OnPlayerDeath
#if defined HitReg_OnPlayerDeath
	forward HitReg_OnPlayerDeath(playerid, killerid, reason);
#endif

public OnPlayerKeyStateChange(playerid, newkeys, oldkeys) {
	if (newkeys & KEY_FIRE) {
		new weaponid = GetPlayerWeapon(playerid);
		
		switch (weaponid) {
			case WEAPON_GRENADE,
				 WEAPON_ROCKETLAUNCHER,
				 WEAPON_HEATSEEKER,
				 WEAPON_SATCHEL,
				 WEAPON_BOMB: {
					HitReg@lastExplosive[playerid][0] = (weaponid == WEAPON_BOMB) ? WEAPON_SATCHEL : weaponid;
					HitReg@lastExplosive[playerid][1] = GetTickCount();
			}
		}
	}
	
	#if defined HitReg_OnPlayerKeyStateChange
		return HitReg_OnPlayerKeyStateChange(playerid, newkeys, oldkeys);
	#else
		return 1;
	#endif
}
#if defined _ALS_OnPlayerKeyStateChange
    #undef OnPlayerKeyStateChange
#else
    #define _ALS_OnPlayerKeyStateChange
#endif
#define OnPlayerKeyStateChange HitReg_OnPlayerKeyStateChange
#if defined HitReg_OnPlayerKeyStateChange
	forward HitReg_OnPlayerKeyStateChange(playerid, newkeys, oldkeys);
#endif

public OnPlayerUpdate(playerid)
{
	FIXES_gsLastAnimation[playerid] = GetPlayerAnimationIndex(playerid);
	
	s_LastUpdate[playerid] = GetTickCount();
	
	if (floatcmp(playerHealth[playerid], 0.0) <= 0) {
		if (s_TrueDeath[playerid][2]) {
			return 0;
		} else {
			ApplyAnimation(playerid, "PED", "KO_skid_back", 4.1, 0, 0, 0, 1, 3000, 1);
			s_TrueDeath[playerid][2] = 1;
			return 0;
		}
	}
	
	#if defined WC_OnPlayerUpdate
		return WC_OnPlayerUpdate(playerid);
	#else
		return 1;
	#endif
}
#if defined _ALS_OnPlayerUpdate
	#undef OnPlayerUpdate
#else
	#define _ALS_OnPlayerUpdate
#endif
#define OnPlayerUpdate WC_OnPlayerUpdate
#if defined WC_OnPlayerUpdate
	forward WC_OnPlayerUpdate(playerid);
#endif

public OnPlayerStateChange(playerid, newstate, oldstate)
{
	if (newstate == PLAYER_STATE_ONFOOT && (oldstate == PLAYER_STATE_DRIVER || oldstate == PLAYER_STATE_PASSENGER)) {
		s_TrueDeath[playerid][3] = GetPlayerVehicleID(playerid);
		s_TrueDeath[playerid][4] = GetTickCount();
	}
	
	#if defined WC_OnPlayerStateChange
		return WC_OnPlayerStateChange(playerid, newstate, oldstate);
	#else
		return 1;
	#endif
}
#if defined _ALS_OnPlayerStateChange
	#undef OnPlayerStateChange
#else
	#define _ALS_OnPlayerStateChange
#endif
#define OnPlayerStateChange WC_OnPlayerStateChange
#if defined WC_OnPlayerStateChange
	forward WC_OnPlayerStateChange(playerid, newstate, oldstate);
#endif

public OnPlayerWeaponShot(playerid, weaponid, hittype, hitid, Float:fX, Float:fY, Float:fZ) {
	s_LastShot[playerid][e_Valid] = false;
	s_LastShot[playerid][e_Hits] = false;
	
	if (!HitReg_IsPlayerSpawned(playerid)) {
		return 0;
	}
	
	if (IsPlayerPaused(playerid)) {
		return 0;
	}
	
	if (hittype == BULLET_HIT_TYPE_PLAYER && hitid != INVALID_PLAYER_ID) {
		if (!IsPlayerConnected(hitid)) {
			return 0;
		}
	}
	
	if ((!(BULLET_HIT_TYPE_NONE <= hittype <= BULLET_HIT_TYPE_PLAYER_OBJECT) ||
	hittype == BULLET_HIT_TYPE_PLAYER && !(0 <= hitid < MAX_PLAYERS) ||
	hittype == BULLET_HIT_TYPE_VEHICLE && !(1 <= hitid < MAX_VEHICLES) ||
	hittype == BULLET_HIT_TYPE_OBJECT && !(1 <= hitid < MAX_OBJECTS) ||
	hittype == BULLET_HIT_TYPE_PLAYER_OBJECT && !(1 <= hitid < MAX_OBJECTS))) {
		return 0;
	}
	
	if (!IsBulletWeapon(weaponid)) {
		return 0;
	}
	
	new Float:fOriginX, Float:fOriginY, Float:fOriginZ, Float:fHitPosX, Float:fHitPosY, Float:fHitPosZ;
	new Float:x, Float:y, Float:z;
	
	GetPlayerPos(playerid, x, y, z);
	GetPlayerLastShotVectors(playerid, fOriginX, fOriginY, fOriginZ, fHitPosX, fHitPosY, fHitPosZ);
	
	new Float:length = VectorSize(fOriginX - fHitPosX, fOriginY - fHitPosY, fOriginZ - fHitPosZ);
	new Float:origin_dist = VectorSize(fOriginX - x, fOriginY - y, fOriginZ - z);
	
	if (floatcmp(origin_dist, 15.0) > 0) {
		new in_veh = IsPlayerInAnyVehicle(hitid) || GetPlayerSurfingVehicleID(playerid);
		
		if ((!in_veh && GetPlayerSurfingVehicleID(playerid) == INVALID_VEHICLE_ID) || floatcmp(origin_dist, 50.0) > 0) {
			return 0;
		}
	}
	
	if (hittype != BULLET_HIT_TYPE_NONE) {
		if (floatcmp(length, s_WeaponRange[weaponid]) > 0) {
			return 0;
		}
		
		if (hittype == BULLET_HIT_TYPE_PLAYER) {
			if (IsPlayerInAnyVehicle(playerid) && GetPlayerVehicleID(playerid) == GetPlayerVehicleID(hitid)) {
				return 0;
			}
			
			new Float:dist = GetPlayerDistanceFromPoint(hitid, fHitPosX, fHitPosY, fHitPosZ);
			new in_veh = IsPlayerInAnyVehicle(hitid);
			
			if ((!in_veh && floatcmp(dist, 20.0) > 0) || floatcmp(dist, 50.0) > 0) {
				return 0;
			}
			
			new Float:pX, Float:pY, Float:pZ, Float:hX, Float:hY, Float:hZ, Float:cX, Float:cY, Float:cZ;
			GetPlayerPos(hitid, hX, hY, hZ);
			
			if (floatcmp(floatabs(hX - fHitPosX), 0.0) == 0 || floatcmp(floatabs(hY - fHitPosY), 0.0) == 0 || floatcmp(floatabs(hZ - fHitPosZ), 0.01) < 0) {
				return 0;
			}
			
			if (floatcmp(floatabs(hX - fHitPosX), 2.0) >= 0 || floatcmp(floatabs(hY - fHitPosY), 2.0) >= 0 || floatcmp(floatabs(hZ - fHitPosZ), 2.0) >= 0) {
				return 0;
			}
			
			if (floatcmp(floatabs(hX - fHitPosX), s_LastShot[playerid][e_AIMX]) == 0 || floatcmp(floatabs(hY - fHitPosY), s_LastShot[playerid][e_AIMY]) == 0 ||
			floatcmp(floatabs(hZ - fHitPosZ), s_LastShot[playerid][e_AIMZ]) == 0) {
				return 0;
			}
			
			s_LastShot[playerid][e_AIMX] = floatabs(hX - fHitPosX);
			s_LastShot[playerid][e_AIMY] = floatabs(hY - fHitPosY);
			s_LastShot[playerid][e_AIMZ] = floatabs(hZ - fHitPosZ);
			
			new Float:S2V_dist = VectorSize(fOriginX - hX, fOriginY - hY, fOriginZ - hZ);
			
			if(floatcmp(S2V_dist, 10.0) > 0)
			{
				GetPlayerCameraFrontVector(playerid, pX, pY, pZ);
				GetPlayerCameraPos(playerid, cX, cY, cZ);
				if(!internal_WC_IsCameraAimingAt(weaponid, hX, hY, hZ, pX, pY, pZ, cX, cY, cZ, 3.0))
				{
					return 0;
				}
			}
		}
	}
	
	new tick = GetTickCount();
	if (tick == 0) tick = 1;
	
	new idx = (HitReg@lastShotID[playerid] + 1) % sizeof(HitReg@lastShotTickCount[]);
	
	if (idx < 0) {
		idx += sizeof(HitReg@lastShotTickCount[]);
	}
	
	HitReg@lastShotID[playerid] = idx;
	HitReg@lastShotTickCount[playerid][idx] = tick;
	HitReg@lastShotWeapon[playerid][idx] = weaponid;
	HitReg@numShotsFired[playerid] += 1;
	
	s_LastShot[playerid][e_Tick] = tick;
	s_LastShot[playerid][e_Weapon] = weaponid;
	s_LastShot[playerid][e_HitType] = hittype;
	s_LastShot[playerid][e_HitId] = hitid;
	s_LastShot[playerid][e_X] = fX;
	s_LastShot[playerid][e_Y] = fY;
	s_LastShot[playerid][e_Z] = fZ;
	s_LastShot[playerid][e_OX] = fOriginX;
	s_LastShot[playerid][e_OY] = fOriginY;
	s_LastShot[playerid][e_OZ] = fOriginZ;
	s_LastShot[playerid][e_HX] = fHitPosX;
	s_LastShot[playerid][e_HY] = fHitPosY;
	s_LastShot[playerid][e_HZ] = fHitPosZ;
	s_LastShot[playerid][e_Length] = length;
	s_LastShot[playerid][e_Hits] = 0;
	
	new bool:multiple_weapons;
	new avg_rate = HitReg_GetAverageFireRate(HitReg@lastShotID[playerid], HitReg@lastShotTickCount[playerid], HitReg@lastShotWeapon[playerid],
	sizeof(HitReg@lastShotTickCount[]), multiple_weapons);
	
	if (avg_rate != -1) {
		if (multiple_weapons) {
			if (avg_rate < 100) {
				return 0;
			}
		}
		else if ((DEFAULT_WEAPON_FIRERATE[weaponid] - avg_rate) > 20) {
			return 0;
		}
	}
	
	if (hittype == BULLET_HIT_TYPE_VEHICLE) {
		if (hitid < 0 || hitid > MAX_VEHICLES || !WC_IsValidVehicle(hitid)) {
			return 0;
		}
		
		new vehicleid = GetPlayerVehicleID(playerid);
		
		if (hitid == vehicleid) {
			return 0;
		}
		
		GetVehiclePos(hitid, x, y, z);
		
		if (floatcmp(floatabs(x - fHitPosX), 0.0) == 0 || floatcmp(floatabs(y - fHitPosY), 0.0) == 0 || floatcmp(floatabs(z - fHitPosZ), 0.01) < 0) {
			return 0;
		}
		
		if (floatcmp(floatabs(x - fHitPosX), 35.0) >= 0 || floatcmp(floatabs(y - fHitPosY), 35.0) >= 0 || floatcmp(floatabs(z - fHitPosZ), 35.0) >= 0) {
			return 0;
		}
		
		if (floatcmp(floatabs(x - fHitPosX), s_LastShot[playerid][e_AIMX]) == 0 || floatcmp(floatabs(y - fHitPosY), s_LastShot[playerid][e_AIMY]) == 0 ||
		floatcmp(floatabs(z - fHitPosZ), s_LastShot[playerid][e_AIMZ]) == 0) {
			return 0;
		}
		
		s_LastShot[playerid][e_AIMX] = floatabs(x - fHitPosX);
		s_LastShot[playerid][e_AIMY] = floatabs(y - fHitPosY);
		s_LastShot[playerid][e_AIMZ] = floatabs(z - fHitPosZ);
	}
	
	new retval = 1;
	
	#if defined WC_OnPlayerWeaponShot
		retval = WC_OnPlayerWeaponShot(playerid, weaponid, hittype, hitid, fX, fY, fZ);
	#else
		retval = 1;
	#endif
	
	s_LastShot[playerid][e_Valid] = !!retval;
	
	if (retval) {
		if (hittype == BULLET_HIT_TYPE_VEHICLE) {
			s_LastVehicleShooter[hitid][0] = playerid;
			s_LastVehicleShooter[hitid][1] = tick;
		}
	}
	
	return retval;
}
#if defined _ALS_OnPlayerWeaponShot
	#undef OnPlayerWeaponShot
#else
	#define _ALS_OnPlayerWeaponShot
#endif
#define OnPlayerWeaponShot WC_OnPlayerWeaponShot
#if defined WC_OnPlayerWeaponShot
	forward WC_OnPlayerWeaponShot(playerid, weaponid, hittype, hitid, Float:fX, Float:fY, Float:fZ);
#endif

/*
 * RakNet
 */

IPacket:207(playerid, BitStream:bs) {
	new onFootData[PR_OnFootSync];

	BS_IgnoreBits(bs, 8);
	BS_ReadOnFootSync(bs, onFootData);

	onFootData[PR_health] = floatround(playerHealth[playerid], floatround_tozero);
	onFootData[PR_armour] = floatround(playerArmour[playerid], floatround_tozero);

	BS_SetWriteOffset(bs, 8);
	BS_WriteOnFootSync(bs, onFootData);
	
	return 1;
}

IPacket:200(playerid, BitStream:bs) {
	new inCarData[PR_InCarSync];

	BS_IgnoreBits(bs, 8);
	BS_ReadInCarSync(bs, inCarData);

	inCarData[PR_playerHealth] = floatround(playerHealth[playerid], floatround_tozero);
	inCarData[PR_armour] = floatround(playerArmour[playerid], floatround_tozero);

	BS_SetWriteOffset(bs, 8);
	BS_WriteInCarSync(bs, inCarData);
	
	return 1;
}

IPacket:211(playerid, BitStream:bs) {
	new passengerData[PR_PassengerSync];

	BS_IgnoreBits(bs, 8);
	BS_ReadPassengerSync(bs, passengerData);

	passengerData[PR_playerHealth] = floatround(playerHealth[playerid], floatround_tozero);
	passengerData[PR_playerArmour] = floatround(playerArmour[playerid], floatround_tozero);

	BS_SetWriteOffset(bs, 8);
	BS_WritePassengerSync(bs, passengerData);
	
	return 1;
}

IRPC:115(playerid, BitStream:bs) {
	new bGiveOrTake, issuerid, Float: amount, weaponid, bodypart;
	BS_ReadValue(bs, PR_BOOL, bGiveOrTake, PR_UINT16, issuerid, PR_FLOAT, amount, PR_UINT32, weaponid, PR_UINT32, bodypart);
	
	if (playerid < 0 || playerid >= MAX_PLAYERS) playerid = INVALID_PLAYER_ID;
	if (issuerid < 0 || issuerid >= MAX_PLAYERS) issuerid = INVALID_PLAYER_ID;
	
	if (bGiveOrTake) {
		if (weaponid < 0 || weaponid >= sizeof(s_ValidDamageTaken) || !s_ValidDamageTaken[weaponid]) {
			return 0;
		}

		if (playerid == INVALID_PLAYER_ID) {
			return 0;
		}

		if (playerid == issuerid) {
			return 0;
		}

		if (floatcmp(amount, 0.0) < 0) {
			return 0;
		}

		if (!HitReg_IsPlayerSpawned(playerid)) {
			return 0;
		}
		
		if (HitReg@playerDeathData[playerid][0]) {
			return 0;
		}
		
		if (GetPlayerWeapon(playerid) == WEAPON_PARACHUTE && weaponid == WEAPON_COLLISION && floatcmp(amount, 3.3) == 0) {
			s_TrueDeath[playerid][5] = 1;
		}
		
		new tick = GetTickCount();

		if (issuerid != INVALID_PLAYER_ID) {
			if (!HitReg_IsPlayerSpawned(issuerid) && weaponid != WEAPON_FLAMETHROWER && weaponid != WEAPON_GRENADE && weaponid != WEAPON_MOLTOV &&
			weaponid != WEAPON_ROCKETLAUNCHER && weaponid != WEAPON_HEATSEEKER && weaponid != WEAPON_BOMB && weaponid != WEAPON_EXPLOSION) {
				return 0;
			}
			
			if ((!IsPlayerStreamedIn(issuerid, playerid) && !IsPlayerPaused(playerid)) || !IsPlayerStreamedIn(playerid, issuerid)) {
				return 0;
			}
			
			if (HitReg@playerTeam[playerid] != NO_TEAM && HitReg@playerTeam[issuerid] != NO_TEAM && HitReg@playerTeam[playerid] == HitReg@playerTeam[issuerid]) {
				return 0;
			}
			
			if (HitReg@playerDeathData[issuerid][0] && weaponid != WEAPON_FLAMETHROWER && weaponid != WEAPON_GRENADE && weaponid != WEAPON_MOLTOV &&
			weaponid != WEAPON_ROCKETLAUNCHER && weaponid != WEAPON_HEATSEEKER && weaponid != WEAPON_BOMB && weaponid != WEAPON_EXPLOSION) {
				return 0;
			}
			
			if (weaponid == WEAPON_MINIGUN) {
				if (IsPlayerInAnyVehicle(issuerid) && GetPlayerVehicleSeat(issuerid) == 0) {
					weaponid = WEAPON_VEHICLE_MINIGUN;
				} else {
					return 0;
				}
			}
			
			if (weaponid != WEAPON_FLAMETHROWER) {
				if (tick == 0) tick = 1;

				new idx = (HitReg@lastHitID[issuerid] + 1) % sizeof(HitReg@lastHitTickCount[]);

				if (idx < 0) {
					idx += sizeof(HitReg@lastHitTickCount[]);
				}

				HitReg@lastHitID[issuerid] = idx;
				HitReg@lastHitTickCount[issuerid][idx] = tick;
				HitReg@lastHitWeapon[issuerid][idx] = weaponid;
				HitReg@numHitsIssued[issuerid] += 1;

				new bool:multiple_weapons;
				new avg_rate = HitReg_GetAverageFireRate(HitReg@lastHitID[issuerid], HitReg@lastHitTickCount[issuerid], HitReg@lastHitWeapon[issuerid],
				sizeof(HitReg@lastHitTickCount[]), multiple_weapons);

				if (avg_rate != -1) {
					if (multiple_weapons) {
						if (avg_rate < 100) {
							return 0;
						}
					}
					else if ((DEFAULT_WEAPON_FIRERATE[weaponid] - avg_rate) > 20) {
						return 0;
					}
				}
			}
		}

		if (IsBulletWeapon(weaponid)) {
			new Float:x, Float:y, Float:z;
			GetPlayerPos(issuerid, x, y, z);
			new Float:dist = GetPlayerDistanceFromPoint(playerid, x, y, z);
			
			if (floatcmp(dist, s_WeaponRange[weaponid] + 2.0) > 0) {
				return 0;
			}
		}

		if (weaponid == WEAPON_HELIBLADES && _:amount != _:330.0) {
			weaponid = WEAPON_CARPARK;
		}

		if (weaponid == WEAPON_EXPLOSION) {
			if (issuerid == INVALID_PLAYER_ID) {
				if (IsPlayerInAnyVehicle(playerid) && GetPlayerVehicleSeat(playerid) == 0) {
					weaponid = WEAPON_VEHICLE_ROCKETLAUNCHER;
				}
				else {
					if (HitReg@lastExplosive[playerid][0] != WEAPON_UNARMED && tick - HitReg@lastExplosive[playerid][1] < 8000) {
						weaponid = HitReg@lastExplosive[playerid][0];
					}
				}
			}
			else {
				if (IsPlayerInAnyVehicle(issuerid) && GetPlayerVehicleSeat(issuerid) == 0) {
					weaponid = WEAPON_VEHICLE_ROCKETLAUNCHER;
				}
				else {
					if (HitReg@lastExplosive[issuerid][0] != WEAPON_UNARMED && tick - HitReg@lastExplosive[issuerid][1] < 8000) {
						weaponid = HitReg@lastExplosive[issuerid][0];
					}
				}
			}
		}

		new Float:health = playerHealth[playerid];
		new Float:armour = playerArmour[playerid];

		new bool:ret = true;

		if (weaponid == WEAPON_DROWN || weaponid == WEAPON_COLLISION) {
			health -= amount;
			if (floatcmp(health, 0.0) <= 0) {
				health = 0.0;
			}
			
			if (floatcmp(health, 0.0) <= 0) {
				#if defined OnPlayerDamage
					ret = bool:OnPlayerDamage(playerid, issuerid, weaponid, amount, bodypart);
				#endif
				
				if (!ret) {
					return 0;
				}
				
				HitReg@playerDeathData[playerid][0] = 1;
				HitReg@playerDeathData[playerid][1] = issuerid;
				HitReg@playerDeathData[playerid][2] = weaponid;
				
				playerHealth[playerid] = -1.0;
				
				SetPlayerHealth(playerid, playerHealth[playerid]);
				
				if (s_TrueDeath[playerid][0] != -1) {
					KillTimer(s_TrueDeath[playerid][0]);
					s_TrueDeath[playerid][0] = -1;
				}
				
				s_TrueDeath[playerid][0] = SetTimerEx("HitReg_TrueDeath", 3000, false, "i", playerid);
				
				return 1;
			}
		}
		else {
			if (floatcmp(armour, 0.0) > 0) {
				armour -= amount;

				if (floatcmp(armour, 0.0) < 0) {
					health += armour;
					armour = 0.0;
				}
			}
			else {
				health -= amount;
				if (floatcmp(health, 0.0) <= 0) {
					health = 0.0;
				}
			}
			
			if (floatcmp(health, 0.0) <= 0) {
				#if defined OnPlayerDamage
					ret = bool:OnPlayerDamage(playerid, issuerid, weaponid, amount, bodypart);
				#endif
				
				if (!ret) {
					return 0;
				}
				
				HitReg@playerDeathData[playerid][0] = 1;
				HitReg@playerDeathData[playerid][1] = issuerid;
				HitReg@playerDeathData[playerid][2] = weaponid;
				
				playerHealth[playerid] = -1.0;
				
				SetPlayerHealth(playerid, playerHealth[playerid]);
				
				if (s_TrueDeath[playerid][0] != -1) {
					KillTimer(s_TrueDeath[playerid][0]);
					s_TrueDeath[playerid][0] = -1;
				}
				
				s_TrueDeath[playerid][0] = SetTimerEx("HitReg_TrueDeath", 3000, false, "i", playerid);
				
				return 1;
			}
		}

		#if defined OnPlayerDamage
			ret = bool:OnPlayerDamage(playerid, issuerid, weaponid, amount, bodypart);
		#endif

		if (!ret) {
			return 0;
		}

		playerArmour[playerid] = armour;
		playerHealth[playerid] = health;

		SetPlayerHealth(playerid, playerHealth[playerid]);
		SetPlayerArmour(playerid, playerArmour[playerid]);

		return 1;
	} else {
		new damagedid = issuerid;
		
		if (weaponid < 0 || weaponid >= sizeof(s_ValidDamageGiven) || !s_ValidDamageGiven[weaponid]) {
			return 0;
		}

		if (damagedid == INVALID_PLAYER_ID) {
			return 0;
		}

		if (playerid == INVALID_PLAYER_ID) {
			return 0;
		}

		if (HitReg@playerDeathData[damagedid][0]) {
			return 0;
		}

		if (HitReg@playerDeathData[playerid][0] && weaponid != WEAPON_FLAMETHROWER) {
			return 0;
		}

		if (playerid == damagedid) {
			return 0;
		}

		if (floatcmp(amount, 0.0) < 0) {
			return 0;
		}

		if (!HitReg_IsPlayerSpawned(playerid) && weaponid != WEAPON_FLAMETHROWER) {
			return 0;
		}

		if (!HitReg_IsPlayerSpawned(damagedid)) {
			return 0;
		}
		
		new tick = GetTickCount();

		if (IsBulletWeapon(weaponid)) {
			new Float:x, Float:y, Float:z;
			GetPlayerPos(playerid, x, y, z);
			new Float:dist = GetPlayerDistanceFromPoint(damagedid, x, y, z);
			
			if (floatcmp(dist, s_WeaponRange[weaponid] + 2.0) > 0) {
				return 0;
			}
			
			if (s_LastShot[playerid][e_Weapon] != weaponid && _:amount != _:2.6400001049041748046875) {
				return 0;
			}
			
			GetPlayerPos(damagedid, x, y, z);
			
			if ((floatcmp(floatabs(x - s_LastShot[playerid][e_HX]), s_LastShot[playerid][e_AIMX]) != 0 || floatcmp(floatabs(y - s_LastShot[playerid][e_HY]),
			s_LastShot[playerid][e_AIMY]) != 0 || floatcmp(floatabs(z - s_LastShot[playerid][e_HZ]), s_LastShot[playerid][e_AIMZ]) != 0) && _:amount != _:2.6400001049041748046875) {
				return 0;
			}
		}

		if (weaponid != WEAPON_FLAMETHROWER) {
			if (tick == 0) tick = 1;
			
			new idx = (HitReg@lastHitID[playerid] + 1) % sizeof(HitReg@lastHitTickCount[]);
			
			if (idx < 0) {
				idx += sizeof(HitReg@lastHitTickCount[]);
			}
			
			HitReg@lastHitID[playerid] = idx;
			HitReg@lastHitTickCount[playerid][idx] = tick;
			HitReg@lastHitWeapon[playerid][idx] = weaponid;
			HitReg@numHitsIssued[playerid] += 1;
			
			new bool:multiple_weapons;
			new avg_rate = HitReg_GetAverageFireRate(HitReg@lastHitID[playerid], HitReg@lastHitTickCount[playerid], HitReg@lastHitWeapon[playerid],
			sizeof(HitReg@lastHitTickCount[]), multiple_weapons);
			
			if (avg_rate != -1) {
				if (multiple_weapons) {
					if (avg_rate < 100) {
						return 0;
					}
				}
				else if ((DEFAULT_WEAPON_FIRERATE[weaponid] - avg_rate) > 20) {
					return 0;
				}
			}
		}

		if ((!IsPlayerStreamedIn(playerid, damagedid) && !IsPlayerPaused(damagedid)) || !IsPlayerStreamedIn(damagedid, playerid)) {
			return 0;
		}

		new bool:knifed = (weaponid == WEAPON_KNIFE && _:amount == _:0.0);

		new Float:health = playerHealth[damagedid];
		new Float:armour = playerArmour[damagedid];

		if (!knifed) {
			if (!HitReg_ProcessDamage(damagedid, playerid, amount, weaponid, bodypart)) {
				return 0;
			}
			
			if ((weaponid == WEAPON_SPRAYCAN || weaponid == WEAPON_FIREEXTINGUISHER) && floatcmp(amount, 0.33) == 0) {
				weaponid = WEAPON_PISTOLWHIP;
				amount = 2.6400001049041748046875;
			} else if ((weaponid == WEAPON_SPRAYCAN || weaponid == WEAPON_FIREEXTINGUISHER) && floatcmp(amount, 0.33) != 0) {
				amount = HitReg@weaponDamage[playerid][weaponid];
			}
			
			if (IsBulletWeapon(weaponid) && _:amount != _:2.6400001049041748046875 && !(IsPlayerInAnyVehicle(playerid) && GetPlayerVehicleSeat(playerid) == 0)) {
				new valid = true;
				
				if (!s_LastShot[playerid][e_Valid]) {
					valid = false;
				} else if (WEAPON_SHOTGUN <= weaponid <= WEAPON_SHOTGSPA) {
					if (s_LastShot[playerid][e_Hits] >= 3) {
						valid = false;
					}
				} else if (s_LastShot[playerid][e_Hits] > 0) {
					if (s_LastShot[playerid][e_Hits] > 4 && weaponid != WEAPON_SNIPER) {
						valid = false;
					}
				}
				
				s_LastShot[playerid][e_Hits] += 1;
				
				if (!valid) {
					return 0;
				}
			}

			if (floatcmp(armour, 0.0) > 0) {
				armour -= amount;

				if (floatcmp(armour, 0.0) < 0) {
					health += armour;
					armour = 0.0;
				}
			}
			else {
				health -= amount;
				if (floatcmp(health, 0.0) <= 0) {
					health = 0.0;
				}
			}
		}
		else {
			if (GetPlayerTargetPlayer(playerid) != damagedid) {
				ClearAnimations(playerid, 1);
				return 0;
			}

			if (GetPlayerWeapon(playerid) != WEAPON_KNIFE) {
				ClearAnimations(playerid, 1);
				return 0;
			}

			new Float:x, Float:y, Float:z, Float:dist;
			GetPlayerPos(damagedid, x, y, z);
			dist = GetPlayerDistanceFromPoint(playerid, x, y, z);

			if (floatcmp(dist, 2.8) >= 0) {
				ClearAnimations(playerid, 1);
				return 0;
			}

			amount = (health + armour);
			health = 0.0;
			armour = 0.0;
		}

		new bool:ret = true;
		#if defined OnPlayerDamage
			ret = bool:OnPlayerDamage(damagedid, playerid, weaponid, amount, bodypart);
		#endif

		if (!ret) {
			return 0;
		}

		if (HitReg@playerTeam[playerid] != NO_TEAM && HitReg@playerTeam[damagedid] != NO_TEAM && HitReg@playerTeam[playerid] == HitReg@playerTeam[damagedid]) {
			return 0;
		}

		if (knifed) {
			HitReg@playerDeathData[damagedid][1] = playerid;
			HitReg@playerDeathData[damagedid][2] = WEAPON_KNIFE;
			
			if (HitReg@knifeKillTimer[damagedid] != -1) {
				KillTimer(HitReg@knifeKillTimer[damagedid]);
				HitReg@knifeKillTimer[damagedid] = -1;
			}
			
			HitReg@knifeKillTimer[damagedid] = SetTimerEx("HitReg_OnPlayerKnifed", 2500, false, "ii", damagedid, playerid);
		}
		else {
			if (floatcmp(health, 0.0) <= 0) {
				HitReg@playerDeathData[damagedid][0] = 1;
				HitReg@playerDeathData[damagedid][1] = playerid;
				HitReg@playerDeathData[damagedid][2] = weaponid;
				
				s_LastShot[playerid][e_Valid] = false;
				
				new vehicleid = GetPlayerVehicleID(damagedid);
				
				if (vehicleid) {
					new Float:x, Float:y, Float:z;
					
					GetPlayerPos(damagedid, x, y, z);
					SetPlayerPos(damagedid, x, y, z);
				}
				
				playerHealth[damagedid] = -1.0;
				
				SetPlayerHealth(damagedid, playerHealth[damagedid]);
				
				if (s_TrueDeath[damagedid][0] != -1) {
					KillTimer(s_TrueDeath[damagedid][0]);
					s_TrueDeath[damagedid][0] = -1;
				}
				
				s_TrueDeath[damagedid][0] = SetTimerEx("HitReg_TrueDeath", 3000, false, "i", damagedid);
				
				return 1;
			}
			
			s_LastShot[playerid][e_Valid] = false;
			
			playerArmour[damagedid] = armour;
			playerHealth[damagedid] = health;
			
			SetPlayerHealth(damagedid, playerHealth[damagedid]);
			SetPlayerArmour(damagedid, playerArmour[damagedid]);
		}

		return 1;
	}
}

/*
 * Hooked natives
 */

stock HitReg_SetPlayerTeam(playerid, team) {
	if(!IsPlayerConnected(playerid)) return 0;

	HitReg@playerTeam[playerid] = team;
	return 1;
}
#if defined _ALS_SetPlayerTeam
    #undef SetPlayerTeam
#else
    #define _ALS_SetPlayerTeam
#endif
#define SetPlayerTeam HitReg_SetPlayerTeam

stock HitReg_GetPlayerTeam(playerid) {
	if(!IsPlayerConnected(playerid)) return 0;

	return HitReg@playerTeam[playerid];
}
#if defined _ALS_GetPlayerTeam
    #undef GetPlayerTeam
#else
    #define _ALS_GetPlayerTeam
#endif
#define GetPlayerTeam HitReg_GetPlayerTeam

stock HitReg_SetPlayerHealth(playerid, Float:health) {
	if(!SetPlayerHealth(playerid, health)) return 0;

	if (floatcmp(health, 0.0) <= 0) {
        HitReg@playerDeathData[playerid][0] = 1;
		HitReg@playerDeathData[playerid][1] = INVALID_PLAYER_ID;
		HitReg@playerDeathData[playerid][2] = WEAPON_UNKNOWN;
		
		health = -1.0;
		
		#if defined OnPlayerDamage
			OnPlayerDamage(playerid, INVALID_PLAYER_ID, WEAPON_UNKNOWN, playerHealth[playerid], 3);
		#endif
		
		playerHealth[playerid] = health;
		
		if (s_TrueDeath[playerid][0] != -1) {
			KillTimer(s_TrueDeath[playerid][0]);
			s_TrueDeath[playerid][0] = -1;
		}
		
		s_TrueDeath[playerid][0] = SetTimerEx("HitReg_TrueDeath", 3000, false, "i", playerid);
	}
	
	playerHealth[playerid] = health;
	
	return 1;
}
#if defined _ALS_SetPlayerHealth
    #undef SetPlayerHealth
#else
    #define _ALS_SetPlayerHealth
#endif
#define SetPlayerHealth HitReg_SetPlayerHealth

stock HitReg_SendDeathMessage(playerid, killerid, reason) {
	switch (reason) {
	    case WEAPON_UNKNOWN: reason = 47; // Fake pistol
	    case WEAPON_CARPARK: reason = WEAPON_VEHICLE;
	    case WEAPON_PISTOLWHIP: reason = WEAPON_UNARMED;
	    case WEAPON_VEHICLE_M4: reason = WEAPON_M4;
	    case WEAPON_VEHICLE_MINIGUN: reason = WEAPON_MINIGUN;
	    case WEAPON_VEHICLE_ROCKETLAUNCHER: reason = WEAPON_ROCKETLAUNCHER;
		case WEAPON_GRENADE: reason = WEAPON_EXPLOSION;
	}

	return SendDeathMessage(playerid, killerid, reason);
}
#if defined _ALS_SendDeathMessage
    #undef SendDeathMessage
#else
    #define _ALS_SendDeathMessage
#endif
#define SendDeathMessage HitReg_SendDeathMessage

stock LC_GetPlayerHealth(playerid, &Float:health) {
	if(!IsPlayerConnected(playerid)) return 0;
	
	if (floatcmp(playerHealth[playerid], 0.0) <= 0) {
		health = 0.0;
	} else {
		health = playerHealth[playerid];
	}
	return 1;
}
#if defined _ALS_GetPlayerHealth
	#undef GetPlayerHealth
#else
	#define _ALS_GetPlayerHealth
#endif
#define GetPlayerHealth LC_GetPlayerHealth

stock LC_SetPlayerArmour(playerid, Float:armour) {
	if(!SetPlayerArmour(playerid, armour)) return 0;
	
	if (floatcmp(armour, 0.0) <= 0) {
		armour = 0.0;
	}
	
	playerArmour[playerid] = armour;
	
	return 1;
}
#if defined _ALS_SetPlayerArmour
	#undef SetPlayerArmour
#else
	#define _ALS_SetPlayerArmour
#endif
#define SetPlayerArmour LC_SetPlayerArmour

stock LC_GetPlayerArmour(playerid, &Float:armour) {
	if(!IsPlayerConnected(playerid)) return 0;
	
	armour = playerArmour[playerid];
	return 1;
}
#if defined _ALS_GetPlayerArmour
	#undef GetPlayerArmour
#else
	#define _ALS_GetPlayerArmour
#endif
#define GetPlayerArmour LC_GetPlayerArmour

stock WC_DestroyVehicle(vehicleid)
{
	if(!DestroyVehicle(vehicleid)) return 0;
	
	s_LastVehicleShooter[vehicleid][0] = INVALID_PLAYER_ID;
	s_LastVehicleShooter[vehicleid][1] = 0;

	return 1;
}
#if defined _ALS_DestroyVehicle
	#undef DestroyVehicle
#else
	#define _ALS_DestroyVehicle
#endif
#define DestroyVehicle WC_DestroyVehicle