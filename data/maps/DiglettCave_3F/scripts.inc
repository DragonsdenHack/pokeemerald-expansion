DiglettCave_3F_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, DiglettCave_3F_OnResume
	.byte 0

DiglettCave_3F_OnResume:
	call DiglettCave_3F_SetupEscapeWarp
	end

DiglettCave_3F_SetupEscapeWarp::
	setescapewarp MAP_ROUTE11, 6, 8
	return

DiggletCave3F_1::
lock     
faceplayer     
msgbox DiggletCave3F_Text_1, MSGBOX_DEFAULT
release     
end

DiggletCave3F_Text_1:
.string "Esta cueva fue construida por\n"
.string "DIGLETTS y DUGTRIOS, llega hasta\l"
.string "las afueras de CIUDAD PLATEADA.$"
