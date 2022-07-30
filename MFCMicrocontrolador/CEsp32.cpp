#include "pch.h"
#include "CEsp32.h"
#include "SerialClass.h";
#include <iostream>
using namespace std;

Serial* ESP32 = new Serial("COM3");

char lectura[2] = "\0";
char comp1[] = "T";
char comp2[] = "F";

bool CEsp32::Conection()
{
	if (ESP32->IsConnected()) {
		return true;
	}
	else {
		return false;
	}
}

void CEsp32::OnLed()
{
	char ON[] = "ON";

	ESP32->WriteData(ON, sizeof(ON) - 1);
}

void CEsp32::OffLed()
{
	char OFF[] = "OFF";

	ESP32->WriteData(OFF, sizeof(OFF) - 1);
}

bool CEsp32::GetSensor()
{
	ESP32->ReadData(lectura, sizeof(lectura) - 1); // Recibe datos del puerto serie.
	if (strcmp(lectura, comp1) == 0) {
		return true;
	}
	else {
		return false;
	}
}

void CEsp32::SetPWM(int a)
{
	char n0[] = "n0";
	char n2[] = "n2";
	char n4[] = "n4";
	char n6[] = "n6";
	char n8[] = "n8";
	char n10[] = "n10";
	char n12[] = "n12";
	char n14[] = "n14";
	char n16[] = "n16";
	char n18[] = "n18";
	char n20[] = "n20";
	char n22[] = "n22";
	char n24[] = "n24";
	char n26[] = "n26";
	char n28[] = "n28";
	char n30[] = "n30";
	char n32[] = "n32";
	char n34[] = "n34";
	char n36[] = "n36";
	char n38[] = "n38";
	char n40[] = "n40";
	char n42[] = "n42";
	char n44[] = "n44";
	char n46[] = "n46";
	char n48[] = "n48";
	char n50[] = "n50";
	char n52[] = "n52";
	char n54[] = "n54";
	char n56[] = "n56";
	char n58[] = "n58";
	char n60[] = "n60";
	char n62[] = "n62";
	char n64[] = "n64";
	char n66[] = "n66";
	char n68[] = "n68";
	char n70[] = "n70";
	char n72[] = "n72";
	char n74[] = "n74";
	char n76[] = "n76";
	char n78[] = "n78";
	char n80[] = "n80";
	char n82[] = "n82";
	char n84[] = "n84";
	char n86[] = "n86";
	char n88[] = "n88";
	char n90[] = "n90";
	char n92[] = "n92";
	char n94[] = "n94";
	char n96[] = "n96";
	char n98[] = "n98";
	char n100[] = "n100";
	char n102[] = "n102";
	char n104[] = "n104";
	char n106[] = "n106";
	char n108[] = "n108";
	char n110[] = "n110";
	char n112[] = "n112";
	char n114[] = "n114";
	char n116[] = "n116";
	char n118[] = "n118";
	char n120[] = "n120";
	char n122[] = "n122";
	char n124[] = "n124";
	char n126[] = "n126";
	char n128[] = "n128";
	char n130[] = "n130";
	char n132[] = "n132";
	char n134[] = "n134";
	char n136[] = "n136";
	char n138[] = "n138";
	char n140[] = "n140";
	char n142[] = "n142";
	char n144[] = "n144";
	char n146[] = "n146";
	char n148[] = "n148";
	char n150[] = "n150";
	char n152[] = "n152";
	char n154[] = "n154";
	char n156[] = "n156";
	char n158[] = "n158";
	char n160[] = "n160";
	char n162[] = "n162";
	char n164[] = "n164";
	char n166[] = "n166";
	char n168[] = "n168";
	char n170[] = "n170";
	char n172[] = "n172";
	char n174[] = "n174";
	char n176[] = "n176";
	char n178[] = "n178";
	char n180[] = "n180";
	char n182[] = "n182";
	char n184[] = "n184";
	char n186[] = "n186";
	char n188[] = "n188";
	char n190[] = "n190";
	char n192[] = "n192";
	char n194[] = "n194";
	char n196[] = "n196";
	char n198[] = "n198";
	char n200[] = "n200";
	char n202[] = "n202";
	char n204[] = "n204";
	char n206[] = "n206";
	char n208[] = "n208";
	char n210[] = "n210";
	char n212[] = "n212";
	char n214[] = "n214";
	char n216[] = "n216";
	char n218[] = "n218";
	char n220[] = "n220";
	char n222[] = "n222";
	char n224[] = "n224";
	char n226[] = "n226";
	char n228[] = "n228";
	char n230[] = "n230";
	char n232[] = "n232";
	char n234[] = "n234";
	char n236[] = "n236";
	char n238[] = "n238";
	char n240[] = "n240";
	char n242[] = "n242";
	char n244[] = "n244";
	char n246[] = "n246";
	char n248[] = "n248";
	char n250[] = "n250";
	char n252[] = "n252";
	char n254[] = "n254";

	if (a == 0) { ESP32->WriteData(n0, sizeof(n0) - 1); }
	if (a == 2) { ESP32->WriteData(n2, sizeof(n2) - 1); }
	if (a == 4) { ESP32->WriteData(n4, sizeof(n4) - 1); }
	if (a == 6) { ESP32->WriteData(n6, sizeof(n6) - 1); }
	if (a == 8) { ESP32->WriteData(n8, sizeof(n8) - 1); }
	if (a == 10) { ESP32->WriteData(n10, sizeof(n10) - 1); }
	if (a == 12) { ESP32->WriteData(n12, sizeof(n12) - 1); }
	if (a == 14) { ESP32->WriteData(n14, sizeof(n14) - 1); }
	if (a == 16) { ESP32->WriteData(n16, sizeof(n16) - 1); }
	if (a == 18) { ESP32->WriteData(n18, sizeof(n18) - 1); }
	if (a == 20) { ESP32->WriteData(n20, sizeof(n20) - 1); }
	if (a == 22) { ESP32->WriteData(n22, sizeof(n22) - 1); }
	if (a == 24) { ESP32->WriteData(n24, sizeof(n24) - 1); }
	if (a == 26) { ESP32->WriteData(n26, sizeof(n26) - 1); }
	if (a == 28) { ESP32->WriteData(n28, sizeof(n28) - 1); }
	if (a == 30) { ESP32->WriteData(n30, sizeof(n30) - 1); }
	if (a == 32) { ESP32->WriteData(n32, sizeof(n32) - 1); }
	if (a == 34) { ESP32->WriteData(n34, sizeof(n34) - 1); }
	if (a == 36) { ESP32->WriteData(n36, sizeof(n36) - 1); }
	if (a == 38) { ESP32->WriteData(n38, sizeof(n38) - 1); }
	if (a == 40) { ESP32->WriteData(n40, sizeof(n40) - 1); }
	if (a == 42) { ESP32->WriteData(n42, sizeof(n42) - 1); }
	if (a == 44) { ESP32->WriteData(n44, sizeof(n44) - 1); }
	if (a == 46) { ESP32->WriteData(n46, sizeof(n46) - 1); }
	if (a == 48) { ESP32->WriteData(n48, sizeof(n48) - 1); }
	if (a == 50) { ESP32->WriteData(n50, sizeof(n50) - 1); }
	if (a == 52) { ESP32->WriteData(n52, sizeof(n52) - 1); }
	if (a == 54) { ESP32->WriteData(n54, sizeof(n54) - 1); }
	if (a == 56) { ESP32->WriteData(n56, sizeof(n56) - 1); }
	if (a == 58) { ESP32->WriteData(n58, sizeof(n58) - 1); }
	if (a == 60) { ESP32->WriteData(n60, sizeof(n60) - 1); }
	if (a == 62) { ESP32->WriteData(n62, sizeof(n62) - 1); }
	if (a == 68) { ESP32->WriteData(n68, sizeof(n68) - 1); }
	if (a == 70) { ESP32->WriteData(n70, sizeof(n70) - 1); }
	if (a == 72) { ESP32->WriteData(n72, sizeof(n72) - 1); }
	if (a == 74) { ESP32->WriteData(n74, sizeof(n74) - 1); }
	if (a == 76) { ESP32->WriteData(n76, sizeof(n76) - 1); }
	if (a == 78) { ESP32->WriteData(n78, sizeof(n78) - 1); }
	if (a == 80) { ESP32->WriteData(n80, sizeof(n80) - 1); }
	if (a == 82) { ESP32->WriteData(n82, sizeof(n82) - 1); }
	if (a == 84) { ESP32->WriteData(n84, sizeof(n84) - 1); }
	if (a == 86) { ESP32->WriteData(n86, sizeof(n86) - 1); }
	if (a == 88) { ESP32->WriteData(n88, sizeof(n88) - 1); }
	if (a == 90) { ESP32->WriteData(n90, sizeof(n90) - 1); }
	if (a == 92) { ESP32->WriteData(n92, sizeof(n92) - 1); }
	if (a == 94) { ESP32->WriteData(n94, sizeof(n94) - 1); }
	if (a == 96) { ESP32->WriteData(n96, sizeof(n96) - 1); }
	if (a == 98) { ESP32->WriteData(n98, sizeof(n98) - 1); }
	if (a == 100) { ESP32->WriteData(n100, sizeof(n100) - 1); }
	if (a == 102) { ESP32->WriteData(n102, sizeof(n102) - 1); }
	if (a == 104) { ESP32->WriteData(n104, sizeof(n104) - 1); }
	if (a == 106) { ESP32->WriteData(n106, sizeof(n106) - 1); }
	if (a == 108) { ESP32->WriteData(n108, sizeof(n108) - 1); }
	if (a == 110) { ESP32->WriteData(n110, sizeof(n110) - 1); }
	if (a == 112) { ESP32->WriteData(n112, sizeof(n112) - 1); }
	if (a == 114) { ESP32->WriteData(n114, sizeof(n114) - 1); }
	if (a == 116) { ESP32->WriteData(n116, sizeof(n116) - 1); }
	if (a == 118) { ESP32->WriteData(n118, sizeof(n118) - 1); }
	if (a == 120) { ESP32->WriteData(n120, sizeof(n120) - 1); }
	if (a == 122) { ESP32->WriteData(n122, sizeof(n122) - 1); }
	if (a == 124) { ESP32->WriteData(n124, sizeof(n124) - 1); }
	if (a == 126) { ESP32->WriteData(n126, sizeof(n126) - 1); }
	if (a == 128) { ESP32->WriteData(n128, sizeof(n128) - 1); }
	if (a == 130) { ESP32->WriteData(n130, sizeof(n130) - 1); }
	if (a == 132) { ESP32->WriteData(n132, sizeof(n132) - 1); }
	if (a == 134) { ESP32->WriteData(n134, sizeof(n134) - 1); }
	if (a == 136) { ESP32->WriteData(n136, sizeof(n136) - 1); }
	if (a == 138) { ESP32->WriteData(n138, sizeof(n138) - 1); }
	if (a == 140) { ESP32->WriteData(n140, sizeof(n140) - 1); }
	if (a == 142) { ESP32->WriteData(n142, sizeof(n142) - 1); }
	if (a == 144) { ESP32->WriteData(n144, sizeof(n144) - 1); }
	if (a == 146) { ESP32->WriteData(n146, sizeof(n146) - 1); }
	if (a == 148) { ESP32->WriteData(n148, sizeof(n148) - 1); }
	if (a == 150) { ESP32->WriteData(n150, sizeof(n150) - 1); }
	if (a == 152) { ESP32->WriteData(n152, sizeof(n152) - 1); }
	if (a == 154) { ESP32->WriteData(n154, sizeof(n154) - 1); }
	if (a == 156) { ESP32->WriteData(n156, sizeof(n156) - 1); }
	if (a == 158) { ESP32->WriteData(n158, sizeof(n158) - 1); }
	if (a == 160) { ESP32->WriteData(n160, sizeof(n160) - 1); }
	if (a == 162) { ESP32->WriteData(n162, sizeof(n162) - 1); }
	if (a == 168) { ESP32->WriteData(n168, sizeof(n168) - 1); }
	if (a == 170) { ESP32->WriteData(n170, sizeof(n170) - 1); }
	if (a == 172) { ESP32->WriteData(n172, sizeof(n172) - 1); }
	if (a == 174) { ESP32->WriteData(n174, sizeof(n174) - 1); }
	if (a == 176) { ESP32->WriteData(n176, sizeof(n176) - 1); }
	if (a == 178) { ESP32->WriteData(n178, sizeof(n178) - 1); }
	if (a == 180) { ESP32->WriteData(n180, sizeof(n180) - 1); }
	if (a == 182) { ESP32->WriteData(n182, sizeof(n182) - 1); }
	if (a == 184) { ESP32->WriteData(n184, sizeof(n184) - 1); }
	if (a == 186) { ESP32->WriteData(n186, sizeof(n186) - 1); }
	if (a == 188) { ESP32->WriteData(n188, sizeof(n188) - 1); }
	if (a == 190) { ESP32->WriteData(n190, sizeof(n190) - 1); }
	if (a == 192) { ESP32->WriteData(n192, sizeof(n192) - 1); }
	if (a == 194) { ESP32->WriteData(n194, sizeof(n194) - 1); }
	if (a == 196) { ESP32->WriteData(n196, sizeof(n196) - 1); }
	if (a == 198) { ESP32->WriteData(n198, sizeof(n198) - 1); }
	if (a == 200) { ESP32->WriteData(n200, sizeof(n200) - 1); }
	if (a == 202) { ESP32->WriteData(n202, sizeof(n202) - 1); }
	if (a == 204) { ESP32->WriteData(n204, sizeof(n204) - 1); }
	if (a == 206) { ESP32->WriteData(n206, sizeof(n206) - 1); }
	if (a == 208) { ESP32->WriteData(n208, sizeof(n208) - 1); }
	if (a == 210) { ESP32->WriteData(n210, sizeof(n210) - 1); }
	if (a == 212) { ESP32->WriteData(n212, sizeof(n212) - 1); }
	if (a == 214) { ESP32->WriteData(n214, sizeof(n214) - 1); }
	if (a == 216) { ESP32->WriteData(n216, sizeof(n216) - 1); }
	if (a == 218) { ESP32->WriteData(n218, sizeof(n218) - 1); }
	if (a == 220) { ESP32->WriteData(n220, sizeof(n220) - 1); }
	if (a == 222) { ESP32->WriteData(n222, sizeof(n222) - 1); }
	if (a == 224) { ESP32->WriteData(n224, sizeof(n224) - 1); }
	if (a == 226) { ESP32->WriteData(n226, sizeof(n226) - 1); }
	if (a == 228) { ESP32->WriteData(n228, sizeof(n228) - 1); }
	if (a == 230) { ESP32->WriteData(n230, sizeof(n230) - 1); }
	if (a == 232) { ESP32->WriteData(n232, sizeof(n232) - 1); }
	if (a == 234) { ESP32->WriteData(n234, sizeof(n234) - 1); }
	if (a == 236) { ESP32->WriteData(n236, sizeof(n236) - 1); }
	if (a == 238) { ESP32->WriteData(n238, sizeof(n238) - 1); }
	if (a == 240) { ESP32->WriteData(n240, sizeof(n240) - 1); }
	if (a == 242) { ESP32->WriteData(n242, sizeof(n242) - 1); }
	if (a == 244) { ESP32->WriteData(n244, sizeof(n244) - 1); }
	if (a == 246) { ESP32->WriteData(n246, sizeof(n246) - 1); }
	if (a == 248) { ESP32->WriteData(n248, sizeof(n248) - 1); }
	if (a == 250) { ESP32->WriteData(n250, sizeof(n250) - 1); }
	if (a == 252) { ESP32->WriteData(n252, sizeof(n252) - 1); }
	if (a == 254) { ESP32->WriteData(n254, sizeof(n254) - 1); }
}

void CEsp32::SetServo(int a)
{
	char s0[] = "s0";
	char s3[] = "s3";
	char s6[] = "s6";
	char s9[] = "s9";
	char s12[] = "s12";
	char s15[] = "s15";
	char s18[] = "s18";
	char s21[] = "s21";
	char s24[] = "s24";
	char s27[] = "s27";
	char s30[] = "s30";
	char s33[] = "s33";
	char s36[] = "s36";
	char s39[] = "s39";
	char s42[] = "s42";
	char s45[] = "s45";
	char s48[] = "s48";
	char s51[] = "s51";
	char s54[] = "s54";
	char s57[] = "s57";
	char s60[] = "s60";
	char s63[] = "s63";
	char s66[] = "s66";
	char s69[] = "s69";
	char s72[] = "s72";
	char s75[] = "s75";
	char s78[] = "s78";
	char s81[] = "s81";
	char s84[] = "s84";
	char s87[] = "s87";
	char s90[] = "s90";
	char s93[] = "s93";
	char s96[] = "s96";
	char s99[] = "s99";
	char s102[] = "s102";
	char s105[] = "s105";
	char s108[] = "s108";
	char s111[] = "s111";
	char s114[] = "s114";
	char s117[] = "s117";
	char s120[] = "s120";
	char s123[] = "s123";
	char s126[] = "s126";
	char s129[] = "s129";
	char s132[] = "s132";
	char s135[] = "s135";
	char s138[] = "s138";
	char s141[] = "s141";
	char s144[] = "s144";
	char s147[] = "s147";
	char s150[] = "s150";
	char s153[] = "s153";
	char s156[] = "s156";
	char s159[] = "s159";
	char s162[] = "s162";
	char s165[] = "s165";
	char s168[] = "s168";
	char s171[] = "s171";
	char s174[] = "s174";
	char s177[] = "s177";
	char s180[] = "s180";
	


	if (a == 0) { ESP32->WriteData(s0, sizeof(s0) - 1); }
	if (a == 3) { ESP32->WriteData(s3, sizeof(s3) - 1); }
	if (a == 6) { ESP32->WriteData(s6, sizeof(s6) - 1); }
	if (a == 9) { ESP32->WriteData(s9, sizeof(s9) - 1); }
	if (a == 12) { ESP32->WriteData(s12, sizeof(s12) - 1); }
	if (a == 15) { ESP32->WriteData(s15, sizeof(s15) - 1); }
	if (a == 18) { ESP32->WriteData(s18, sizeof(s18) - 1); }
	if (a == 21) { ESP32->WriteData(s21, sizeof(s21) - 1); }
	if (a == 24) { ESP32->WriteData(s24, sizeof(s24) - 1); }
	if (a == 27) { ESP32->WriteData(s27, sizeof(s27) - 1); }
	if (a == 30) { ESP32->WriteData(s30, sizeof(s30) - 1); }
	if (a == 33) { ESP32->WriteData(s33, sizeof(s33) - 1); }
	if (a == 36) { ESP32->WriteData(s36, sizeof(s36) - 1); }
	if (a == 39) { ESP32->WriteData(s39, sizeof(s39) - 1); }
	if (a == 42) { ESP32->WriteData(s42, sizeof(s42) - 1); }
	if (a == 45) { ESP32->WriteData(s45, sizeof(s45) - 1); }
	if (a == 48) { ESP32->WriteData(s48, sizeof(s48) - 1); }
	if (a == 51) { ESP32->WriteData(s51, sizeof(s51) - 1); }
	if (a == 54) { ESP32->WriteData(s54, sizeof(s54) - 1); }
	if (a == 57) { ESP32->WriteData(s57, sizeof(s57) - 1); }
	if (a == 60) { ESP32->WriteData(s60, sizeof(s60) - 1); }
	if (a == 63) { ESP32->WriteData(s63, sizeof(s63) - 1); }
	if (a == 66) { ESP32->WriteData(s66, sizeof(s66) - 1); }
	if (a == 69) { ESP32->WriteData(s69, sizeof(s69) - 1); }
	if (a == 72) { ESP32->WriteData(s72, sizeof(s72) - 1); }
	if (a == 75) { ESP32->WriteData(s75, sizeof(s75) - 1); }
	if (a == 78) { ESP32->WriteData(s78, sizeof(s78) - 1); }
	if (a == 81) { ESP32->WriteData(s81, sizeof(s81) - 1); }
	if (a == 84) { ESP32->WriteData(s84, sizeof(s84) - 1); }
	if (a == 87) { ESP32->WriteData(s87, sizeof(s87) - 1); }
	if (a == 90) { ESP32->WriteData(s90, sizeof(s90) - 1); }
	if (a == 93) { ESP32->WriteData(s93, sizeof(s93) - 1); }
	if (a == 96) { ESP32->WriteData(s96, sizeof(s96) - 1); }
	if (a == 99) { ESP32->WriteData(s99, sizeof(s99) - 1); }
	if (a == 102) { ESP32->WriteData(s102, sizeof(s102) - 1); }
	if (a == 105) { ESP32->WriteData(s105, sizeof(s105) - 1); }
	if (a == 108) { ESP32->WriteData(s108, sizeof(s108) - 1); }
	if (a == 111) { ESP32->WriteData(s111, sizeof(s111) - 1); }
	if (a == 114) { ESP32->WriteData(s114, sizeof(s114) - 1); }
	if (a == 117) { ESP32->WriteData(s117, sizeof(s117) - 1); }
	if (a == 120) { ESP32->WriteData(s120, sizeof(s120) - 1); }
	if (a == 123) { ESP32->WriteData(s123, sizeof(s123) - 1); }
	if (a == 126) { ESP32->WriteData(s126, sizeof(s126) - 1); }
	if (a == 129) { ESP32->WriteData(s129, sizeof(s129) - 1); }
	if (a == 132) { ESP32->WriteData(s132, sizeof(s132) - 1); }
	if (a == 135) { ESP32->WriteData(s135, sizeof(s135) - 1); }
	if (a == 138) { ESP32->WriteData(s138, sizeof(s138) - 1); }
	if (a == 141) { ESP32->WriteData(s141, sizeof(s141) - 1); }
	if (a == 144) { ESP32->WriteData(s144, sizeof(s144) - 1); }
	if (a == 147) { ESP32->WriteData(s147, sizeof(s147) - 1); }
	if (a == 150) { ESP32->WriteData(s150, sizeof(s150) - 1); }
	if (a == 153) { ESP32->WriteData(s153, sizeof(s153) - 1); }
	if (a == 156) { ESP32->WriteData(s156, sizeof(s156) - 1); }
	if (a == 159) { ESP32->WriteData(s159, sizeof(s159) - 1); }
	if (a == 162) { ESP32->WriteData(s162, sizeof(s162) - 1); }
	if (a == 165) { ESP32->WriteData(s165, sizeof(s165) - 1); }
	if (a == 168) { ESP32->WriteData(s168, sizeof(s168) - 1); }
	if (a == 171) { ESP32->WriteData(s171, sizeof(s171) - 1); }
	if (a == 174) { ESP32->WriteData(s174, sizeof(s174) - 1); }
	if (a == 177) { ESP32->WriteData(s177, sizeof(s177) - 1); }
	if (a == 180) { ESP32->WriteData(s180, sizeof(s180) - 1); }









}
