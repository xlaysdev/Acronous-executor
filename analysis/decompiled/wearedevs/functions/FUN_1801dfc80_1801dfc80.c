/* FUN_1801dfc80 @ 1801dfc80 */

ulonglong FUN_1801dfc80(void)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined8 unaff_RSI;
  undefined7 uVar4;
  undefined8 uVar5;
  undefined7 uVar7;
  ulonglong uVar6;
  bool bVar8;
  longlong local_38;
  int *local_30;
  longlong local_28;
  
  uVar6 = (ulonglong)(byte)(DAT_1802fd818 - 1);
  if ((byte)(DAT_1802fd818 - 1) < 3) goto LAB_1801dfd38;
  uVar5 = 0;
  FUN_1801d7ad0(&local_38,"RUST_BACKTRACElibrary\\std\\src\\thread\\id.rs",0xe);
  uVar7 = (undefined7)((ulonglong)uVar5 >> 8);
  if (SBORROW8(0,local_38)) {
    uVar6 = CONCAT71(uVar7,2);
    bVar2 = 3;
  }
  else {
    uVar4 = (undefined7)((ulonglong)unaff_RSI >> 8);
    if (local_28 == 4) {
      if (*local_30 != 0x6c6c7566) goto LAB_1801dfcfa;
      bVar1 = 2;
      bVar2 = 2;
      uVar3 = (uint)CONCAT71(uVar4,1);
      uVar6 = CONCAT71(uVar7,1);
    }
    else if ((local_28 == 1) && ((char)*local_30 == '0')) {
      bVar1 = 3;
      bVar2 = 3;
      uVar3 = (uint)CONCAT71(uVar4,2);
      uVar6 = CONCAT71(uVar7,2);
    }
    else {
LAB_1801dfcfa:
      bVar1 = 1;
      bVar2 = 1;
      uVar3 = 0;
      uVar6 = 0;
    }
    if (local_38 != 0) {
      thunk_FUN_1801d3330(local_30,local_38,1);
      uVar6 = (ulonglong)uVar3;
      bVar2 = bVar1;
    }
  }
  bVar1 = 0;
  LOCK();
  bVar8 = DAT_1802fd818 == 0;
  if (bVar8) {
    DAT_1802fd818 = bVar2;
  }
  else {
    bVar1 = DAT_1802fd818;
  }
  UNLOCK();
  if ((!bVar8) && (uVar6 = CONCAT71((int7)(uVar6 >> 8),3), bVar1 < 4)) {
    uVar6 = (ulonglong)(0x2010003 >> ((bVar1 & 3) << 3));
  }
LAB_1801dfd38:
  return uVar6 & 0xffffffff;
}


