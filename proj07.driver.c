
//add r0, r6, 0xff  CASE 1
//mach_lang = 11100010100001100000000011111111;
mach_lang = 3800432895;
char arrayed[32];

decode(mach_lang, arrayed);

printf("%s", arrayed);

//adds r1, r6, r7
//mach_lang = 11100000100101100001000000000111;
mach_lang = 3767930887;
char arrayed[32];

decode(mach_lang, arrayed);

printf("%s", arrayed);

//ands r0, r3, r8
//mach_lang = 11100000000100110000000000001000;
mach_lang = 3759341576;
char arrayed[32];

decode(mach_lang, arrayed);

printf("%s", arrayed);

//and r1, r6, 12
//mach_lang = 11100010000100110000000000001010;
mach_lang = 3792896010;
char arrayed[32];

decode(mach_lang, arrayed);

printf("%s", arrayed);

//eors r1, r6, 31
//mach_lang = 11100010001101100001000000011111;
mach_lang = 3795193887;
char arrayed[32];

decode(mach_lang, arrayed);

printf("%s", arrayed);

//sub r1, r6, r7
//mach_lang = 11100000010001100001000000000111;
mach_lang = 3762688007;
char arrayed[32];

decode(mach_lang, arrayed);

printf("%s", arrayed);

//rsbs r1, r6, r7
//mach_lang = 11100000011101100001000000000111;
mach_lang = 3765833735;
char arrayed[32];

decode(mach_lang, arrayed);

printf("%s", arrayed);

//adcs r1, r6, r7
//mach_lang = 11100000101101100001000000000111;
mach_lang = 3770028039;
char arrayed[32];

decode(mach_lang, arrayed);

printf("%s", arrayed);

//sbcs r1, r6, r7
//mach_lang = 11100000110101100001000000000111;
mach_lang = 3772125191;
char arrayed[32];

decode(mach_lang, arrayed);

printf("%s", arrayed);

//rsc r1, r6, r7
//mach_lang = 11100000111001100001000000000111;
mach_lang = 3773173767;
char arrayed[32];

decode(mach_lang, arrayed);

printf("%s", arrayed);

//tst r1, r7 CASE WARNING IMPROPER S BIT
//mach_lang = 11100001000100000001000000000111;
mach_lang = 3775926279;
char arrayed[32];

decode(mach_lang, arrayed);

printf("%s", arrayed);

//teq r1, r7
//mach_lang = 11100001001000000001000000000111;
mach_lang = 3776974855;
char arrayed[32];

decode(mach_lang, arrayed);

printf("%s", arrayed);

//cmp r1, r6, r7 CASE WARNING 
//mach_lang = 11100001010001100001000000000111;
mach_lang = 3779465223;
char arrayed[32];

decode(mach_lang, arrayed);

printf("%s", arrayed);

//cmn r1, r7
//mach_lang = 11100001011000000001000000000111;
mach_lang = 3781169159;
char arrayed[32];

decode(mach_lang, arrayed);

printf("%s", arrayed);

//orrs r1, r6, r7
//mach_lang = 11100001100101100001000000000111;
mach_lang = 3784708103;
char arrayed[32];

decode(mach_lang, arrayed);

printf("%s", arrayed);

//movs r1, r7
//mach_lang = 11100001101001100001000000000111;
mach_lang = 3785756679;
char arrayed[32];

decode(mach_lang, arrayed);

printf("%s", arrayed);

//bic r0, r6, 13 CASE WARNING UNUSED
//mach_lang = 11100011110000110000000010001101;
mach_lang = 3821207693;
char arrayed[32];

decode(mach_lang, arrayed);

printf("%s", arrayed);

//mvn r1, r6, r7 CASE WARNING UNUSED
//mach_lang = 11101011111101100001000000000111;
mach_lang = 3958771719;
char arrayed[32];

decode(mach_lang, arrayed);

printf("%s", arrayed);




