NeoLavandaCementerioS2_MapScripts::
	.byte 0

NeoLavandaCementerioS2_2::
lock     
faceplayer     
msgbox NeoLavandaCementerioS2_Text_2, MSGBOX_DEFAULT
release     
end

NeoLavandaCementerioS2_Text_2:
.string "La religión no trata tanto de decir al\n"
.string "hombre que hay un Dios como de impedir\l"
.string "que el hombre piense que es Dios.$"





NeoLavandaCementerioS2_3::
lock     
faceplayer     
msgbox NeoLavandaCementerioS2_Text_3, MSGBOX_DEFAULT
release     
end

NeoLavandaCementerioS2_Text_3:
.string "Los hombres se destruyen unos a otros\n"
.string "en la guerra; y se destruyen a sí\l"
.string "mismos en tiempo de paz.$"





NeoLavandaCementerioS2_4::
lock     
faceplayer     
msgbox NeoLavandaCementerioS2_Text_4, MSGBOX_DEFAULT
release     
end

NeoLavandaCementerioS2_Text_4:
.string "La ira es un ácido que hace más daño al\n"
.string "recipiente que la almacena que al\l"
.string "objeto sobre el que se vierte.$"




NeoLavandaCementerioS2_14::
lock     
faceplayer     
msgbox NeoLavandaCementerioS2_Text_14, MSGBOX_DEFAULT
release     
end

NeoLavandaCementerioS2_Text_14:
.string "Jamás pensé que viviría para ver caer\n"
.string "la TORRE POKÉMON. Pronto me uniré a\l"
.string "todas estas almas que antaño\l"
.string "caminaban, al igual que nosotros. Solo\l"
.string "espero disfrutar del tiempo que me\l"
.string "queda.$"





NeoLavandaCementerioS2_15::
lock     
faceplayer     
msgbox NeoLavandaCementerioS2_Text_15, MSGBOX_DEFAULT
release     
end

NeoLavandaCementerioS2_Text_15:
.string "¿Crees que este lugar logrará\n"
.string "conservar la esencia original de TORRE\l"
.string "POKEMON?$"






NeoLavandaCementerioS2_18::
lock     
faceplayer     
msgbox NeoLavandaCementerioS2_Text_18, MSGBOX_DEFAULT
release     
end

NeoLavandaCementerioS2_Text_18:
.string "No debemos esperar la felicidad, no es\n"
.string "algo que merezcamos. Cuando la vida va\l"
.string "bien, es un regalo inesperado, no puede\l"
.string "durar siempre.$"



NeoLavandaCementerioS2_EventScript_Exorcista::
	trainerbattle_single TRAINER_TRAINER_37, NeoLavandaCementerioS2_Text_ExorcistaIntro, NeoLavandaCementerioS2_Text_ExorcistaDefeated
	msgbox NeoLavandaCementerioS2_Text_ExorcistaPostBattle, MSGBOX_AUTOCLOSE
	end



NeoLavandaCementerioS2_EventScript_Exorcista2::
	trainerbattle_single TRAINER_TRAINER_36, NeoLavandaCementerioS2_Text_Exorcista2Intro, NeoLavandaCementerioS2_Text_Exorcista2Defeated
	msgbox NeoLavandaCementerioS2_Text_Exorcista2PostBattle, MSGBOX_AUTOCLOSE
	end



NeoLavandaCementerioS2_EventScript_Exorcista3::
	trainerbattle_single TRAINER_TRAINER_38, NeoLavandaCementerioS2_Text_Exorcista3Intro, NeoLavandaCementerioS2_Text_Exorcista3Defeated
	msgbox NeoLavandaCementerioS2_Text_Exorcista3PostBattle, MSGBOX_AUTOCLOSE
	end


NeoLavandaCementerioS2_Combate_Azul::
lock
msgbox NeoLavandaCementerioS2_Combate_Azul_Texto_1 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerioS2_Combate_Azul_Texto_2 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerioS2_Combate_Azul_Texto_3 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerioS2_Combate_Azul_Texto_4 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerioS2_Combate_Azul_Texto_5 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerioS2_Combate_Azul_Texto_6 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerioS2_Combate_Azul_Texto_7 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerioS2_Combate_Azul_Texto_8 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerioS2_Combate_Azul_Texto_9 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerioS2_Combate_Azul_Texto_10 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerioS2_Combate_Azul_Texto_11 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerioS2_Combate_Azul_Texto_12 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerioS2_Combate_Azul_Texto_13 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerioS2_Combate_Azul_Texto_14 MSGBOX_AUTOCLOSE
release
end

NeoLavandaCementerioS2_Combate_Azul_Texto_1:
.string "????: Como si fuera TORRE POKÉMON…$"

NeoLavandaCementerioS2_Combate_Azul_Texto_2:
.string "AZUL: {PLAYER}. Que estés en PUEBLO\n"
	.string "LAVANDA no me sorprende, sí que lo\l"
	.string "estés en este lugar en concreto.$"

NeoLavandaCementerioS2_Combate_Azul_Texto_3:
.string "Lo importante ahora ocurre en la nueva\n"
	.string "TORRE RADIO, ¿no es así? ¿Qué puede\l"
	.string "aportar este lugar a alguien cómo tú?\l"
	.string "¿No tienes reuniones y eventos por\l"
	.string "hacer allí?$"

NeoLavandaCementerioS2_Combate_Azul_Texto_4:
.string "…$"

NeoLavandaCementerioS2_Combate_Azul_Texto_5:
.string "Ya veo, hace un año hubiera ido contigo\n"
	.string "sin dudarlo, ahora mis prioridades son\l"
	.string "otras, aunque…$"

NeoLavandaCementerioS2_Combate_Azul_Texto_6:
.string "Hace mucho que no nos encontramos así,\n"
	.string "cara a cara. Tus viajes por JOHTO han\l"
	.string "debido de fortalecerte mucho.$"

NeoLavandaCementerioS2_Combate_Azul_Texto_7:
.string "Siento curiosidad… por ver hasta dónde\n"
	.string "has llegado. ¡Muéstrame a tu equipo!$"

NeoLavandaCementerioS2_Combate_Azul_Texto_8:
.string "¡Ja! ¡Tal y como temía!$"

NeoLavandaCementerioS2_Combate_Azul_Texto_9:
.string "Apenas puedo reconocer a ese enérgico\n"
	.string "y vivaz GOLBAT. Tan escurridizo y lleno\l"
	.string "de potencial ya en ese entonces,\l"
	.string "cuando ambos iniciábamos nuestro\l"
	.string "viaje. Nadie creería en el CROBAT-& tan\l"
	.string "imponente que es hoy día.$"

NeoLavandaCementerioS2_Combate_Azul_Texto_10:
.string "Me siento afortunado de haber\n"
	.string "compartido generación contigo,\l"
	.string "{PLAYER}. ANDRA y tú sois grandes\l"
	.string "ENTRENADORES, insaciables.$"

NeoLavandaCementerioS2_Combate_Azul_Texto_11:
.string "Mi ambición por ser el mejor acabó en el\n"
	.string "momento en que demostraste que ROJO\l"
	.string "no lo era, ya lo sabes.$"

NeoLavandaCementerioS2_Combate_Azul_Texto_12:
.string "Como mi abuelo, el estudio de los\n"
	.string "POKÉMON me atrae más que el combate en\l"
	.string "sí, si mientras puedo ayudaros a\l"
	.string "controlar el GIMNASIO de CIUDAD VERDE,\l"
	.string "será lo mejor para todos.$"

NeoLavandaCementerioS2_Combate_Azul_Texto_13:
.string "Ándate con cuidado, {PLAYER}. Algo me\n"
	.string "dice que en los tiempos modernos no\l"
	.string "vale únicamente con sentir pasión por\l"
	.string "el combate POKÉMON para destacar.$"

NeoLavandaCementerioS2_Combate_Azul_Texto_14:
.string "A mi manera, seguiré viviendo momentos\n"
	.string "como este, al igual que tú, aunque tal\l"
	.string "vez con menor intensidad.$"

NeoLavandaCementerioS2_Evento_Fuji::
lock
msgbox NeoLavandaCementerioS2_Evento_Fuji_Texto_1 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerioS2_Evento_Fuji_Texto_2 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerioS2_Evento_Fuji_Texto_3 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerioS2_Evento_Fuji_Texto_4 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerioS2_Evento_Fuji_Texto_5 MSGBOX_AUTOCLOSE
release
end

NeoLavandaCementerioS2_Evento_Fuji_Texto_1:
.string "FUJI: Ah, {PLAYER}. ¿Qué te parece?\n"
	.string "¿Crees que este lugar es un digno\l"
	.string "reemplazo de TORRE POKÉMON? No ha sido\l"
	.string "fácil construirlo.$"

NeoLavandaCementerioS2_Evento_Fuji_Texto_2:
.string "Como habrás podido comprobar, el lugar\n"
	.string "es un tanto inestable. No parece ser el\l"
	.string "espíritu de MAROWAK, ya lo\l"
	.string "ahuyentaste. Debe tratarse de algo\l"
	.string "más antiguo… tal vez vinculado a la\l"
	.string "creación misma de TORRE POKÉMON… es\l"
	.string "muy probable que haya visto su\l"
	.string "destrucción como un agravio a su\l"
	.string "descanso.$"

NeoLavandaCementerioS2_Evento_Fuji_Texto_3:
.string "Ahora mismo la zona norte es\n"
	.string "incontenible. La hemos cerrado por\l"
	.string "precaución, pero me temo que no hay\l"
	.string "otra opción que entrar ahí por la\l"
	.string "fuerza, y derrotar al espíritu en un\l"
	.string "combate POKÉMON.$"

NeoLavandaCementerioS2_Evento_Fuji_Texto_4:
.string "SECRETARIA: Aquí tienes la LLAVE.\n"
	.string "Mucha suerte.$"

NeoLavandaCementerioS2_Evento_Fuji_Texto_5:
.string "FUJI: Me mantendré cerca tuya,\n"
	.string "{PLAYER}.$"


NeoLavandaCementerioS2_Evento_Ghost::
lock
msgbox NeoLavandaCementerioS2_Evento_Ghost_Texto_1 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerioS2_Evento_Ghost_Texto_2 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerioS2_Evento_Ghost_Texto_3 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerioS2_Evento_Ghost_Texto_4 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerioS2_Evento_Ghost_Texto_5 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerioS2_Evento_Ghost_Texto_6 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerioS2_Evento_Ghost_Texto_7 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerioS2_Evento_Ghost_Texto_8 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerioS2_Evento_Ghost_Texto_9 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerioS2_Evento_Ghost_Texto_10 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerioS2_Evento_Ghost_Texto_11 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerioS2_Evento_Ghost_Texto_12 MSGBOX_AUTOCLOSE
release
end

NeoLavandaCementerioS2_Evento_Ghost_Texto_1:
.string "(Una energía extremadamente fuerte te\n"
	.string "ataca)$"

NeoLavandaCementerioS2_Evento_Ghost_Texto_2:
.string "…$"

NeoLavandaCementerioS2_Evento_Ghost_Texto_3:
.string "(¡La energía parece haberse alterado\n"
	.string "aún más!)$"

NeoLavandaCementerioS2_Evento_Ghost_Texto_4:
.string "FUJI: ¡Ya es suficiente! ¡No fue\n"
	.string "nuestra decisión que esto acabara así!\l"
	.string "¡Ningún lugar es eterno, ni este\l"
	.string "CEMENTERIO, ni TORRE POKÉMON!$"

NeoLavandaCementerioS2_Evento_Ghost_Texto_5:
.string "GHOST: …$"

NeoLavandaCementerioS2_Evento_Ghost_Texto_6:
.string "MEW: …$"

NeoLavandaCementerioS2_Evento_Ghost_Texto_7:
.string "(MEW apaciguó al espíritu)$"

NeoLavandaCementerioS2_Evento_Ghost_Texto_8:
.string "FUJI: Después de tanto tiempo.$"

NeoLavandaCementerioS2_Evento_Ghost_Texto_9:
.string "MEW: …$"

NeoLavandaCementerioS2_Evento_Ghost_Texto_10:
.string "FUJI: …$"

NeoLavandaCementerioS2_Evento_Ghost_Texto_11:
.string "¿Crees que MEW es también\n"
	.string "omnipresente? ¿Habrá visto todas y\l"
	.string "cada una de mis acciones desde lo de\l"
	.string "MEWTWO? ¿Todo lo que he luchado por\l"
	.string "mitigar los efectos de la TORRE RADIO\l"
	.string "en la esencia de PUEBLO LAVANDA?$"

NeoLavandaCementerioS2_Evento_Ghost_Texto_12:
.string "FUJI: C-creo… que me ha perdonado.$"
