#include <stddef.h>
#include <stdlib.h>
#include <stdbool.h>

void logic_gate_net(char const *inp, char *out) {
	const char v0 = (char) (~inp[55]);
	const char v1 = (char) (~(inp[35] | inp[21]));
	const char v2 = (char) (inp[13] | inp[79]);
	const char v3 = (char) (inp[39] & ~inp[25]);
	const char v4 = (char) (inp[61] | inp[15]);
	const char v5 = (char) (~inp[32]);
	const char v6 = (char) (~(inp[2] & inp[83]));
	const char v7 = (char) (inp[38]);
	const char v8 = (char) (~inp[4]);
	const char v9 = (char) (inp[29] & ~inp[24]);
	const char v10 = (char) (~(inp[12] & inp[51]));
	const char v11 = (char) (~inp[39]);
	const char v12 = (char) (inp[56] ^ inp[65]);
	const char v13 = (char) (inp[64] & ~inp[50]);
	const char v14 = (char) (inp[27] & ~inp[58]);
	const char v15 = (char) (~(inp[22] & inp[73]));
	const char v16 = (char) (inp[54] | inp[81]);
	const char v17 = (char) (~(char) 0);
	const char v18 = (char) (inp[9]);
	const char v19 = (char) (~inp[28]);
	const char v20 = (char) (inp[73] & inp[71]);
	const char v21 = (char) (inp[81]);
	const char v22 = (char) (inp[56] | inp[54]);
	const char v23 = (char) (inp[8] & inp[43]);
	const char v24 = (char) (inp[73]);
	const char v25 = (char) (~(inp[27] ^ inp[78]));
	const char v26 = (char) (inp[42] | inp[1]);
	const char v27 = (char) (~inp[1]);
	const char v28 = (char) (~inp[40] | inp[69]);
	const char v29 = (char) (~(inp[23] ^ inp[21]));
	const char v30 = (char) (inp[45]);
	const char v31 = (char) (inp[34]);
	const char v32 = (char) (~(inp[51] & inp[29]));
	const char v33 = (char) (~inp[9] | inp[4]);
	const char v34 = (char) (~inp[13]);
	const char v35 = (char) (~inp[70]);
	const char v36 = (char) (~(inp[46] & inp[32]));
	const char v37 = (char) (~(char) 0);
	const char v38 = (char) (inp[69] | inp[66]);
	const char v39 = (char) (inp[52] & ~inp[61]);
	const char v40 = (char) (inp[42] ^ inp[35]);
	const char v41 = (char) (inp[47] & inp[35]);
	const char v42 = (char) (inp[50] & ~inp[0]);
	const char v43 = (char) (~(inp[42] | inp[25]));
	const char v44 = (char) (inp[15] | inp[29]);
	const char v45 = (char) (~inp[80]);
	const char v46 = (char) (inp[9] & ~inp[18]);
	const char v47 = (char) (inp[35] ^ inp[47]);
	const char v48 = (char) (inp[74] & ~inp[68]);
	const char v49 = (char) (inp[53]);
	const char v50 = (char) (inp[75] & ~inp[34]);
	const char v51 = (char) (~(inp[48] | inp[74]));
	const char v52 = (char) (inp[12] ^ inp[30]);
	const char v53 = (char) (inp[23] ^ inp[54]);
	const char v54 = (char) (~(inp[12] ^ inp[31]));
	const char v55 = (char) (inp[5] & ~inp[79]);
	const char v56 = (char) (inp[60] ^ inp[39]);
	const char v57 = (char) (inp[83]);
	const char v58 = (char) (~inp[17] | inp[76]);
	const char v59 = (char) (inp[18]);
	const char v60 = (char) (inp[45] | inp[36]);
	const char v61 = (char) (~inp[82] | inp[72]);
	const char v62 = (char) (~inp[0] | inp[12]);
	const char v63 = (char) (~(inp[77] & inp[48]));
	const char v64 = (char) (~inp[64] | inp[32]);
	const char v65 = (char) (~(inp[24] & inp[26]));
	const char v66 = (char) (~inp[60]);
	const char v67 = (char) (inp[70] ^ inp[49]);
	const char v68 = (char) (~inp[19] | inp[34]);
	const char v69 = (char) (~(inp[62] | inp[42]));
	const char v70 = (char) (~inp[20]);
	const char v71 = (char) (inp[67] ^ inp[41]);
	const char v72 = (char) (inp[3] ^ inp[44]);
	const char v73 = (char) (inp[75] | inp[76]);
	const char v74 = (char) (~inp[81] | inp[54]);
	const char v75 = (char) (inp[59] & ~inp[60]);
	const char v76 = (char) (~inp[37] | inp[58]);
	const char v77 = (char) (inp[25] | inp[26]);
	const char v78 = (char) (~(inp[30] | inp[0]));
	const char v79 = (char) ((char) 0);
	const char v80 = (char) (~(inp[43] & inp[41]));
	const char v81 = (char) (inp[2]);
	const char v82 = (char) (~inp[1] | inp[82]);
	const char v83 = (char) (~inp[66] | inp[77]);
	const char v84 = (char) (~inp[68] | inp[41]);
	const char v85 = (char) (inp[11] & ~inp[63]);
	const char v86 = (char) (~(char) 0);
	const char v87 = (char) (inp[14] & ~inp[6]);
	const char v88 = (char) (inp[53] & ~inp[20]);
	const char v89 = (char) (~(inp[69] & inp[3]));
	const char v90 = (char) (~(inp[36] | inp[22]));
	const char v91 = (char) (~inp[45] | inp[24]);
	const char v92 = (char) (inp[33] ^ inp[57]);
	const char v93 = (char) (~(inp[70] ^ inp[62]));
	const char v94 = (char) (~(inp[11] & inp[58]));
	const char v95 = (char) (inp[55] ^ inp[22]);
	const char v96 = (char) (inp[73] & inp[44]);
	const char v97 = (char) (~inp[16]);
	const char v98 = (char) (~(inp[80] ^ inp[39]));
	const char v99 = (char) (inp[5] & ~inp[61]);
	const char v100 = (char) (inp[8] ^ inp[10]);
	const char v101 = (char) (inp[17]);
	const char v102 = (char) (inp[23] & ~inp[71]);
	const char v103 = (char) (inp[75] ^ inp[63]);
	const char v104 = (char) (inp[51] & ~inp[83]);
	const char v105 = (char) (inp[2] & inp[37]);
	const char v106 = (char) (inp[67]);
	const char v107 = (char) (~inp[78]);
	const char v108 = (char) (~inp[68] | inp[14]);
	const char v109 = (char) (~inp[71]);
	const char v110 = (char) (inp[3] ^ inp[1]);
	const char v111 = (char) (~inp[16] | inp[28]);
	const char v112 = (char) (~(inp[44] ^ inp[32]));
	const char v113 = (char) (inp[57] & inp[60]);
	const char v114 = (char) (~inp[58] | inp[78]);
	const char v115 = (char) (~(inp[65] ^ inp[7]));
	const char v116 = (char) (inp[72] & ~inp[75]);
	const char v117 = (char) (inp[65]);
	const char v118 = (char) (inp[27] & inp[65]);
	const char v119 = (char) (inp[48] ^ inp[49]);
	const char v120 = (char) (~inp[31]);
	const char v121 = (char) (inp[55] & ~inp[34]);
	const char v122 = (char) (inp[7]);
	const char v123 = (char) (~(inp[67] & inp[0]));
	const char v124 = (char) (inp[77] | inp[5]);
	const char v125 = (char) (~(inp[64] & inp[18]));
	const char v126 = (char) (inp[5] | inp[46]);
	const char v127 = (char) (~inp[67]);
	const char v128 = (char) (inp[74] & ~inp[66]);
	const char v129 = (char) (inp[72] | inp[50]);
	const char v130 = (char) (~(inp[46] ^ inp[78]));
	const char v131 = (char) (inp[26]);
	const char v132 = (char) (~(inp[13] ^ inp[6]));
	const char v133 = (char) (inp[40]);
	const char v134 = (char) (~(inp[14] & inp[11]));
	const char v135 = (char) (~(inp[52] ^ inp[30]));
	const char v136 = (char) (inp[16]);
	const char v137 = (char) (inp[20] & ~inp[57]);
	const char v138 = (char) (~(inp[53] | inp[24]));
	const char v139 = (char) (~inp[59] | inp[49]);
	const char v140 = (char) (~inp[31] | inp[28]);
	const char v141 = (char) (inp[70] ^ inp[23]);
	const char v142 = (char) (~inp[22] | inp[16]);
	const char v143 = (char) (inp[56] | inp[43]);
	const char v144 = (char) (~inp[61]);
	const char v145 = (char) (inp[9] ^ inp[50]);
	const char v146 = (char) (~inp[4]);
	const char v147 = (char) (~inp[6] | inp[28]);
	const char v148 = (char) (~inp[10]);
	const char v149 = (char) (~inp[31] | inp[37]);
	const char v150 = (char) (~(inp[36] ^ inp[71]));
	const char v151 = (char) (~inp[13]);
	const char v152 = (char) (~(inp[10] ^ inp[7]));
	const char v153 = (char) (inp[47] | inp[74]);
	const char v154 = (char) (~(char) 0);
	const char v155 = (char) (~inp[52] | inp[79]);
	const char v156 = (char) (~inp[79] | inp[49]);
	const char v157 = (char) (~inp[2]);
	const char v158 = (char) (~(inp[8] | inp[40]));
	const char v159 = (char) (inp[38] | inp[72]);
	const char v160 = (char) (inp[15] & ~inp[19]);
	const char v161 = (char) (inp[63]);
	const char v162 = (char) (~inp[10]);
	const char v163 = (char) (inp[37] | inp[3]);
	const char v164 = (char) (inp[81] & ~inp[19]);
	const char v165 = (char) (~(inp[40] & inp[68]));
	const char v166 = (char) (~inp[19]);
	const char v167 = (char) (inp[80]);
	const char v168 = (char) (v74 & ~v4);
	const char v169 = (char) (~v38);
	const char v170 = (char) (v77);
	const char v171 = (char) (v79 & ~v6);
	const char v172 = (char) (~v66);
	const char v173 = (char) (v135);
	const char v174 = (char) (~v30);
	const char v175 = (char) (v57 | v8);
	const char v176 = (char) (~v15);
	const char v177 = (char) (~v48 | v127);
	const char v178 = (char) (~v17 | v123);
	const char v179 = (char) (~(v139 ^ v148));
	const char v180 = (char) (~(v40 ^ v133));
	const char v181 = (char) (~v136 | v131);
	const char v182 = (char) (v60);
	const char v183 = (char) (v41 & v74);
	const char v184 = (char) (~v28);
	const char v185 = (char) (~(v110 & v11));
	const char v186 = (char) (v167 & ~v34);
	const char v187 = (char) (v121);
	const char v188 = (char) (~v75);
	const char v189 = (char) (~(char) 0);
	const char v190 = (char) (v3);
	const char v191 = (char) (v7 & ~v14);
	const char v192 = (char) (v121);
	const char v193 = (char) (~(v116 ^ v97));
	const char v194 = (char) (v101);
	const char v195 = (char) (~v141);
	const char v196 = (char) (~v105 | v115);
	const char v197 = (char) (~(v108 ^ v126));
	const char v198 = (char) (v132);
	const char v199 = (char) (~(v167 ^ v18));
	const char v200 = (char) (~v142);
	const char v201 = (char) (~v123 | v158);
	const char v202 = (char) ((char) 0);
	const char v203 = (char) (~v32);
	const char v204 = (char) (~v128);
	const char v205 = (char) (v75);
	const char v206 = (char) (v95 ^ v29);
	const char v207 = (char) (v98);
	const char v208 = (char) (~v136 | v92);
	const char v209 = (char) (~(v110 | v34));
	const char v210 = (char) (~(v23 ^ v61));
	const char v211 = (char) (~(v83 | v122));
	const char v212 = (char) (v5 ^ v149);
	const char v213 = (char) (~v114 | v58);
	const char v214 = (char) (~(v153 ^ v99));
	const char v215 = (char) (~v163);
	const char v216 = (char) (v102 & ~v155);
	const char v217 = (char) (~v138);
	const char v218 = (char) (v31 & v55);
	const char v219 = (char) (v128 & v125);
	const char v220 = (char) (~v160);
	const char v221 = (char) (~v72 | v89);
	const char v222 = (char) (~(v157 ^ v90));
	const char v223 = (char) (~v62 | v33);
	const char v224 = (char) (~v54);
	const char v225 = (char) (~v156 | v71);
	const char v226 = (char) (v135);
	const char v227 = (char) (v29 ^ v159);
	const char v228 = (char) (v85 ^ v11);
	const char v229 = (char) (~(v153 & v31));
	const char v230 = (char) (v43 & ~v58);
	const char v231 = (char) (v132);
	const char v232 = (char) (~(v151 | v144));
	const char v233 = (char) (~v2 | v101);
	const char v234 = (char) (~(v130 ^ v43));
	const char v235 = (char) (v116);
	const char v236 = (char) (~v96 | v150);
	const char v237 = (char) (v138);
	const char v238 = (char) (~v113 | v107);
	const char v239 = (char) (v165 & v78);
	const char v240 = (char) (~v120);
	const char v241 = (char) (v27);
	const char v242 = (char) (~v162);
	const char v243 = (char) (v62 & ~v148);
	const char v244 = (char) (v87 & ~v10);
	const char v245 = (char) (~v145 | v118);
	const char v246 = (char) (v14);
	const char v247 = (char) (v20);
	const char v248 = (char) (~v52 | v40);
	const char v249 = (char) (v15 | v54);
	const char v250 = (char) (v8);
	const char v251 = (char) (v38);
	const char v252 = (char) (~v3);
	const char v253 = (char) (~v146);
	const char v254 = (char) (~(v36 & v102));
	const char v255 = (char) (~(v161 | v42));
	const char v256 = (char) (~v77);
	const char v257 = (char) (~v93 | v133);
	const char v258 = (char) (v4);
	const char v259 = (char) (~(v63 ^ v45));
	const char v260 = (char) (v106 & ~v81);
	const char v261 = (char) (v105 & ~v39);
	const char v262 = (char) (v166);
	const char v263 = (char) (v19);
	const char v264 = (char) (~v81 | v60);
	const char v265 = (char) (v91);
	const char v266 = (char) (~v22);
	const char v267 = (char) (v143 & ~v80);
	const char v268 = (char) (~v68);
	const char v269 = (char) (~v152 | v104);
	const char v270 = (char) (~v152);
	const char v271 = (char) (v86 & ~v154);
	const char v272 = (char) (~(v126 & v64));
	const char v273 = (char) (~v37 | v20);
	const char v274 = (char) (~v2);
	const char v275 = (char) (~v151);
	const char v276 = (char) (~v25);
	const char v277 = (char) (v113);
	const char v278 = (char) (~v137);
	const char v279 = (char) (~(v140 | v50));
	const char v280 = (char) (~(v119 | v94));
	const char v281 = (char) (~v53);
	const char v282 = (char) (v163 | v106);
	const char v283 = (char) (~(v129 ^ v33));
	const char v284 = (char) (~(v117 ^ v27));
	const char v285 = (char) (~v42);
	const char v286 = (char) (v139 | v69);
	const char v287 = (char) (v84 & ~v26);
	const char v288 = (char) (v26);
	const char v289 = (char) (~v82);
	const char v290 = (char) (~v6 | v35);
	const char v291 = (char) (v103);
	const char v292 = (char) (v56 & ~v41);
	const char v293 = (char) (~v49);
	const char v294 = (char) (~v46);
	const char v295 = (char) (v137 | v161);
	const char v296 = (char) (~v142);
	const char v297 = (char) (~(v65 & v30));
	const char v298 = (char) (~(char) 0);
	const char v299 = (char) (v156);
	const char v300 = (char) (~(v13 | v45));
	const char v301 = (char) (v9 & ~v53);
	const char v302 = (char) (v141 ^ v87);
	const char v303 = (char) (~v157);
	const char v304 = (char) (~v46 | v73);
	const char v305 = (char) (v95);
	const char v306 = (char) (~(v70 | v134));
	const char v307 = (char) (v9 & ~v103);
	const char v308 = (char) (v147 & ~v63);
	const char v309 = (char) (v124);
	const char v310 = (char) (~v145);
	const char v311 = (char) (v97 | v111);
	const char v312 = (char) (~v78);
	const char v313 = (char) (v98 ^ v19);
	const char v314 = (char) (v59 & ~v122);
	const char v315 = (char) (v72);
	const char v316 = (char) (v164 & ~v131);
	const char v317 = (char) (~(char) 0);
	const char v318 = (char) (v12 & ~v91);
	const char v319 = (char) (~(v140 ^ v68));
	const char v320 = (char) (~v49 | v96);
	const char v321 = (char) (v111);
	const char v322 = (char) (~(v88 | v120));
	const char v323 = (char) (v92 ^ v44);
	const char v324 = (char) (v73);
	const char v325 = (char) (~v39);
	const char v326 = (char) (~v37);
	const char v327 = (char) (v21 & v85);
	const char v328 = (char) (v66);
	const char v329 = (char) (~(v67 | v24));
	const char v330 = (char) (~v16 | v100);
	const char v331 = (char) (v18 & ~v166);
	const char v332 = (char) (~(char) 0);
	const char v333 = (char) (v100 & v125);
	const char v334 = (char) (v112 & v22);
	const char v335 = (char) (v76);
	const char v336 = (char) (~v251);
	const char v337 = (char) (v229);
	const char v338 = (char) ((char) 0);
	const char v339 = (char) (v181);
	const char v340 = (char) (v203 & ~v191);
	const char v341 = (char) (v244);
	const char v342 = (char) (~(v262 | v287));
	const char v343 = (char) (~v248);
	const char v344 = (char) (v331 | v207);
	const char v345 = (char) (~(v171 ^ v222));
	const char v346 = (char) (v277);
	const char v347 = (char) (~v305);
	const char v348 = (char) (~v188 | v232);
	const char v349 = (char) (~v258);
	const char v350 = (char) (v301);
	const char v351 = (char) (~(v205 & v226));
	const char v352 = (char) (v208);
	const char v353 = (char) (~(v316 | v245));
	const char v354 = (char) (~v247);
	const char v355 = (char) (~v185);
	const char v356 = (char) (~v310);
	const char v357 = (char) (~v200);
	const char v358 = (char) (v234);
	const char v359 = (char) (~v170);
	const char v360 = (char) (~(v207 ^ v302));
	const char v361 = (char) (~(v225 & v307));
	const char v362 = (char) (~(v237 & v185));
	const char v363 = (char) (v287 | v320);
	const char v364 = (char) (v280);
	const char v365 = (char) (~v218);
	const char v366 = (char) (~v231);
	const char v367 = (char) (v297 & v170);
	const char v368 = (char) (v243);
	const char v369 = (char) (~v246);
	const char v370 = (char) (~v296 | v301);
	const char v371 = (char) (~v333 | v306);
	const char v372 = (char) (v193);
	const char v373 = (char) (~(v273 ^ v241));
	const char v374 = (char) (v220);
	const char v375 = (char) (~(v209 ^ v228));
	const char v376 = (char) (v191 & ~v193);
	const char v377 = (char) (~v231);
	const char v378 = (char) (v284);
	const char v379 = (char) (v181);
	const char v380 = (char) (~v249);
	const char v381 = (char) (~(char) 0);
	const char v382 = (char) (~v173);
	const char v383 = (char) (v223 ^ v304);
	const char v384 = (char) (~v204);
	const char v385 = (char) (~v169 | v272);
	const char v386 = (char) (v175);
	const char v387 = (char) (~v187 | v293);
	const char v388 = (char) (v298 | v308);
	const char v389 = (char) (v242 & ~v274);
	const char v390 = (char) (v226 | v291);
	const char v391 = (char) (v284);
	const char v392 = (char) (~v190);
	const char v393 = (char) ((char) 0);
	const char v394 = (char) (v251 & v221);
	const char v395 = (char) (~v288);
	const char v396 = (char) (v274 | v267);
	const char v397 = (char) (v268 | v257);
	const char v398 = (char) (~v315);
	const char v399 = (char) (~v192);
	const char v400 = (char) (~v174);
	const char v401 = (char) (~v174);
	const char v402 = (char) (~(v264 ^ v330));
	const char v403 = (char) (v288);
	const char v404 = (char) (~v238);
	const char v405 = (char) (v204 | v275);
	const char v406 = (char) (v265 & v258);
	const char v407 = (char) (~v323);
	const char v408 = (char) (~v319);
	const char v409 = (char) (~v278);
	const char v410 = (char) (~(v270 & v178));
	const char v411 = (char) (v252);
	const char v412 = (char) (~v192);
	const char v413 = (char) (v299 & ~v290);
	const char v414 = (char) (v331 | v183);
	const char v415 = (char) (v324);
	const char v416 = (char) (v296 & ~v214);
	const char v417 = (char) (v234);
	const char v418 = (char) (v293);
	const char v419 = (char) (~(v303 ^ v215));
	const char v420 = (char) (~v196);
	const char v421 = (char) (~(v198 & v250));
	const char v422 = (char) (v319);
	const char v423 = (char) (v243);
	const char v424 = (char) (~(char) 0);
	const char v425 = (char) (v214 & ~v292);
	const char v426 = (char) (v285 | v302);
	const char v427 = (char) (~(v217 ^ v332));
	const char v428 = (char) (v221);
	const char v429 = (char) (v203 ^ v323);
	const char v430 = (char) (~(v334 ^ v295));
	const char v431 = (char) (v291);
	const char v432 = (char) (~v248);
	const char v433 = (char) (v245 & v197);
	const char v434 = (char) (v184);
	const char v435 = (char) (~(v187 ^ v227));
	const char v436 = (char) (v276);
	const char v437 = (char) (~(char) 0);
	const char v438 = (char) (v335 & v177);
	const char v439 = (char) (~(v169 ^ v246));
	const char v440 = (char) (~(char) 0);
	const char v441 = (char) (v314);
	const char v442 = (char) (~(v278 | v182));
	const char v443 = (char) (v257 ^ v311);
	const char v444 = (char) (v211);
	const char v445 = (char) (~(v334 ^ v299));
	const char v446 = (char) (~(v213 | v327));
	const char v447 = (char) (v240);
	const char v448 = (char) (~(v168 | v315));
	const char v449 = (char) (~v286 | v176);
	const char v450 = (char) (v320);
	const char v451 = (char) (v276);
	const char v452 = (char) (v307);
	const char v453 = (char) (v317 & ~v212);
	const char v454 = (char) (~v285);
	const char v455 = (char) (~v289);
	const char v456 = (char) (v270);
	const char v457 = (char) (~v264);
	const char v458 = (char) (~v321);
	const char v459 = (char) (v300);
	const char v460 = (char) (v263 & ~v321);
	const char v461 = (char) (v256);
	const char v462 = (char) (v306);
	const char v463 = (char) (~v223);
	const char v464 = (char) (v168 | v282);
	const char v465 = (char) (~v253);
	const char v466 = (char) (~(v259 ^ v303));
	const char v467 = (char) (~v333);
	const char v468 = (char) (v312);
	const char v469 = (char) (~v195 | v314);
	const char v470 = (char) (v179);
	const char v471 = (char) (v205);
	const char v472 = (char) (v253);
	const char v473 = (char) (v329);
	const char v474 = (char) (~v310);
	const char v475 = (char) (v179);
	const char v476 = (char) (v261 & v186);
	const char v477 = (char) (v280 & v318);
	const char v478 = (char) (v271 | v283);
	const char v479 = (char) (~(v304 | v326));
	const char v480 = (char) (~(v216 & v210));
	const char v481 = (char) (~v201);
	const char v482 = (char) (~v229 | v230);
	const char v483 = (char) (~v255);
	const char v484 = (char) (~(v217 | v247));
	const char v485 = (char) (v233);
	const char v486 = (char) (v190 & ~v273);
	const char v487 = (char) (~v272);
	const char v488 = (char) (~v279);
	const char v489 = (char) (v208 & ~v188);
	const char v490 = (char) (v230);
	const char v491 = (char) (~(v215 ^ v240));
	const char v492 = (char) (~v312 | v322);
	const char v493 = (char) (~v283 | v224);
	const char v494 = (char) (~v286);
	const char v495 = (char) (v175);
	const char v496 = (char) (v198);
	const char v497 = (char) (v212);
	const char v498 = (char) (~(v292 | v300));
	const char v499 = (char) (~v201);
	const char v500 = (char) (~v335 | v237);
	const char v501 = (char) (v172 ^ v281);
	const char v502 = (char) (~v255);
	const char v503 = (char) (v316);
	out[0] = (char) (v460);
	out[1] = (char) (v354 ^ v393);
	out[2] = (char) (v352 ^ v388);
	out[3] = (char) (~v451);
	out[4] = (char) (v497 ^ v381);
	out[5] = (char) (~v463);
	out[6] = (char) (v356);
	out[7] = (char) (v446);
	out[8] = (char) (~(v484 ^ v492));
	out[9] = (char) (~v342);
	out[10] = (char) (v461);
	out[11] = (char) (~v416);
	out[12] = (char) (v452);
	out[13] = (char) (~v421 | v349);
	out[14] = (char) (~v502);
	out[15] = (char) (v482);
	out[16] = (char) (v399);
	out[17] = (char) (v490 | v486);
	out[18] = (char) (~(v369 | v416));
	out[19] = (char) (v346 | v469);
	out[20] = (char) (v484);
	out[21] = (char) (v410);
	out[22] = (char) (v500);
	out[23] = (char) (v429 & ~v473);
	out[24] = (char) (v437 ^ v476);
	out[25] = (char) (~v361 | v490);
	out[26] = (char) (~v415);
	out[27] = (char) (~(v364 ^ v414));
	out[28] = (char) (~v491);
	out[29] = (char) (v460 & ~v344);
	out[30] = (char) (~(v405 | v355));
	out[31] = (char) (~v493);
	out[32] = (char) (v485 & ~v398);
	out[33] = (char) (~v403);
	out[34] = (char) (~v491);
	out[35] = (char) (~v419);
	out[36] = (char) (v464 | v479);
	out[37] = (char) (~(v471 & v345));
	out[38] = (char) (v377 ^ v383);
	out[39] = (char) (~v392);
	out[40] = (char) (~(v395 ^ v397));
	out[41] = (char) (~v391);
	out[42] = (char) (v401);
	out[43] = (char) (v475);
	out[44] = (char) (v477 ^ v453);
	out[45] = (char) (~v377 | v446);
	out[46] = (char) (~v343 | v396);
	out[47] = (char) (~v379);
	out[48] = (char) (v404);
	out[49] = (char) (v437 | v475);
	out[50] = (char) (~(v463 | v462));
	out[51] = (char) (~v378);
	out[52] = (char) (v417 | v496);
	out[53] = (char) (v434);
	out[54] = (char) (~(v380 | v501));
	out[55] = (char) (~v369);
	out[56] = (char) (~v380);
	out[57] = (char) (v447 | v343);
	out[58] = (char) (v353);
	out[59] = (char) (~v467);
	out[60] = (char) (v404);
	out[61] = (char) (~(v391 & v436));
	out[62] = (char) (~v339);
	out[63] = (char) (~v348);
	out[64] = (char) (v402 | v442);
	out[65] = (char) (~(v476 | v362));
	out[66] = (char) (~v394);
	out[67] = (char) (v435);
	out[68] = (char) (v466);
	out[69] = (char) (v354);
	out[70] = (char) (~v465);
	out[71] = (char) (v372 & v464);
	out[72] = (char) (~v374);
	out[73] = (char) (~v371);
	out[74] = (char) (v468);
	out[75] = (char) (~v448);
	out[76] = (char) (v430);
	out[77] = (char) (v455);
	out[78] = (char) (v410);
	out[79] = (char) (v408);
	out[80] = (char) (v434 | v424);
	out[81] = (char) (v432 & v472);
	out[82] = (char) (v453);
	out[83] = (char) (~v428);
	out[84] = (char) (v427);
	out[85] = (char) (v368 | v348);
	out[86] = (char) (v488 | v405);
	out[87] = (char) (v468 ^ v347);
	out[88] = (char) (v456);
	out[89] = (char) (v438 & ~v336);
	out[90] = (char) (v479 & v417);
	out[91] = (char) (v483 & v392);
	out[92] = (char) (~v486);
	out[93] = (char) (~v363);
	out[94] = (char) (v502);
	out[95] = (char) (v386 ^ v359);
	out[96] = (char) (v367);
	out[97] = (char) (v394 & v438);
	out[98] = (char) (~v474);
	out[99] = (char) (~v370);
	out[100] = (char) (v341);
	out[101] = (char) (~v466);
	out[102] = (char) (~v375);
	out[103] = (char) (v465 & ~v477);
	out[104] = (char) (v366);
	out[105] = (char) (v338 ^ v441);
	out[106] = (char) (~v363);
	out[107] = (char) (~v408);
	out[108] = (char) (~(v347 ^ v421));
	out[109] = (char) (~(v385 | v382));
	out[110] = (char) (v415);
	out[111] = (char) (~(v470 | v425));
	out[112] = (char) (v374);
	out[113] = (char) (v337 & ~v360);
	out[114] = (char) (~(v384 ^ v358));
	out[115] = (char) (v489);
	out[116] = (char) (v371 ^ v462);
	out[117] = (char) (v494 & ~v487);
	out[118] = (char) (v493 & ~v473);
	out[119] = (char) (v423 & ~v338);
	out[120] = (char) (~v430);
	out[121] = (char) (~v395);
	out[122] = (char) (v367 | v344);
	out[123] = (char) (v423);
	out[124] = (char) (~v455);
	out[125] = (char) (~v351);
	out[126] = (char) (v467);
	out[127] = (char) (v366);
	out[128] = (char) (~(v496 | v387));
	out[129] = (char) (~v400);
	out[130] = (char) (v383);
	out[131] = (char) (~(v340 ^ v373));
	out[132] = (char) (v393 | v407);
	out[133] = (char) (v458 | v422);
	out[134] = (char) (~v426 | v433);
	out[135] = (char) (~v412);
	out[136] = (char) (~v452);
	out[137] = (char) (~v359);
	out[138] = (char) (~v382);
	out[139] = (char) (v449 & ~v443);
	out[140] = (char) (v406);
	out[141] = (char) (~v443);
	out[142] = (char) (v362);
	out[143] = (char) (v411 & v497);
	out[144] = (char) (~v482);
	out[145] = (char) (v499);
	out[146] = (char) (~v375);
	out[147] = (char) (~v435);
	out[148] = (char) (v352);
	out[149] = (char) ((char) 0);
	out[150] = (char) (v454);
	out[151] = (char) (~v356);
	out[152] = (char) (~v353);
	out[153] = (char) (v433);
	out[154] = (char) (v456);
	out[155] = (char) (~(v357 ^ v403));
	out[156] = (char) (v454 & ~v340);
	out[157] = (char) (~v370);
	out[158] = (char) (v445);
	out[159] = (char) (~v373);
	out[160] = (char) (v499 & ~v480);
	out[161] = (char) (v419);
	out[162] = (char) (v459);
	out[163] = (char) (v425 ^ v381);
	out[164] = (char) (v355);
	out[165] = (char) (~v384);
	out[166] = (char) (v389 & ~v432);
	out[167] = (char) (v398);
}

void apply_logic_gate_net (bool const *inp, int *out, size_t len) {
    char *inp_temp = malloc(84*sizeof(char));
    char *out_temp = malloc(168*sizeof(char));
    char *out_temp_o = malloc(7*sizeof(char));
    
    for(size_t i = 0; i < len; ++i) {
    
        // Converting the bool array into a bitpacked array
        for(size_t d = 0; d < 84; ++d) {
            char res = (char) 0;
            for(size_t b = 0; b < 8; ++b) {
                res <<= 1;
                res += !!(inp[i * 84 * 8 + (8 - b - 1) * 84 + d]);
            }
            inp_temp[d] = res;
        }
    
        // Applying the logic gate net
        logic_gate_net(inp_temp, out_temp);
        
        // GroupSum of the results via logic gate networks
        for(size_t c = 0; c < 2; ++c) {  // for each class
            // Initialize the output bits
            for(size_t d = 0; d < 7; ++d) {
                out_temp_o[d] = (char) 0;
            }
            
            // Apply the adder logic gate network
            for(size_t a = 0; a < 84; ++a) {
                char carry = out_temp[c * 84 + a];
                char out_temp_o_d;
                for(int d = 7 - 1; d >= 0; --d) {
                    out_temp_o_d  = out_temp_o[d];
                    out_temp_o[d] = carry ^ out_temp_o_d;
                    carry         = carry & out_temp_o_d;
                }
            }
            
            // Unpack the result bits
            for(size_t b = 0; b < 8; ++b) {
                const char bit_mask = (char) 1 << b;
                int res = 0;
                for(size_t d = 0; d < 7; ++d) {
                    res <<= 1;
                    res += !!(out_temp_o[d] & bit_mask);
                }
                out[(i * 8 + b) * 2 + c] = res;
            }
        }
    }
    free(inp_temp);
    free(out_temp);
    free(out_temp_o);
}
