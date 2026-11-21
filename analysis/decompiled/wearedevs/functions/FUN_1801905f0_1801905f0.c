/* FUN_1801905f0 @ 1801905f0 */

void FUN_1801905f0(void)

{
  undefined *puVar1;
  char *pcVar2;
  
  puVar1 = &DAT_180266a30;
  if (DAT_1802fd758 == 2) {
    puVar1 = PTR_DAT_1802fd510;
  }
  pcVar2 = 
  "C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\url-2.5.8\\src\\lib.rs"
  ;
  if (DAT_1802fd758 == 2) {
    pcVar2 = DAT_1802fd508;
  }
                    /* WARNING: Could not recover jumptable at 0x00018019061d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar1 + 0x18))(pcVar2);
  return;
}


