TorreDunsparce_P1_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, TorreDunsparce_P1_OnResume
	.byte 0

TorreDunsparce_P1_OnResume:
	call TorreDunsparce_P1_SetupEscapeWarp
	end

TorreDunsparce_P1_SetupEscapeWarp::
	setescapewarp MAP_ROUTE50, 49, 25
	return


TorreDunsparce_P1_Sign::
lock
msgbox TorreDunsparce_P1_Sign_Texto_1 MSGBOX_SIGN
msgbox TorreDunsparce_P1_Sign_Texto_2 MSGBOX_SIGN
release
end

TorreDunsparce_P1_Sign_Texto_2:
.string "Donde nació la voluntad de trascender\n"
	.string "la forma.$"

TorreDunsparce_P1_Sign_Texto_1:
.string "TORRE DUN$"
