/* FUN_1801b1ae0 @ 1801b1ae0 */

ulonglong FUN_1801b1ae0(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 unaff_RBX;
  char local_51;
  char *local_50;
  code *local_48;
  
  if (*(char *)(param_1 + 0x20) != '\0') {
    uVar6 = FUN_1801f0c50(param_2,"Sensitive",9);
    return uVar6;
  }
  cVar4 = FUN_1801f0c50(param_2,
                        "\"C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\http-1.5.0\\src\\header\\value.rs"
                        ,1);
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (cVar4 == '\0') {
    lVar2 = *(longlong *)(param_1 + 8);
    uVar3 = *(ulonglong *)(param_1 + 0x10);
    uVar8 = 0;
    if (uVar3 != 0) {
      uVar7 = 0;
      do {
        uVar1 = uVar7 + 1;
        local_51 = *(char *)(lVar2 + uVar7);
        if ((byte)(local_51 - 0x20U) < 0x5f) {
          if (local_51 == '\"') {
LAB_1801b1bc5:
            if (uVar7 != uVar8) {
              if ((uVar3 < uVar7) || (uVar7 < uVar8)) {
                    /* WARNING: Subroutine does not return */
                FUN_180201a30(uVar8,uVar7,uVar3,&DAT_180285968);
              }
              cVar4 = FUN_1801f0c50(param_2,uVar8 + lVar2,uVar7 - uVar8);
              if (cVar4 != '\0') goto LAB_1801b1c64;
            }
            if (local_51 == '\"') {
              cVar4 = FUN_1801f0c50(param_2,&DAT_180285965,2);
            }
            else {
              local_50 = &local_51;
              local_48 = FUN_1801ee990;
              cVar4 = FUN_1801ef150(*param_2,param_2[1],&DAT_180285960,&local_50);
            }
            uVar8 = uVar1;
            if (cVar4 != '\0') goto LAB_1801b1c64;
          }
        }
        else if (local_51 != '\t') goto LAB_1801b1bc5;
        uVar7 = uVar1;
      } while (uVar3 != uVar1);
      if (uVar3 < uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_180201a30(uVar8,uVar3,uVar3,&DAT_180285948);
      }
    }
    cVar4 = FUN_1801f0c50(param_2,lVar2 + uVar8,uVar3 - uVar8);
    if (cVar4 == '\0') {
      uVar5 = FUN_1801f0c50(param_2,
                            "\"C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\http-1.5.0\\src\\header\\value.rs"
                            ,1);
      uVar6 = (ulonglong)uVar5;
    }
  }
LAB_1801b1c64:
  return uVar6 & 0xffffffff;
}


