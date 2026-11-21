/* FUN_18012c2c0 @ 18012c2c0 */

uint FUN_18012c2c0(longlong param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  pcVar4 = *(char **)(param_1 + 8);
  pcVar5 = *(char **)(param_1 + 0x10);
  uVar6 = 3;
  if (pcVar5 < pcVar4) {
    cVar1 = *pcVar5;
    *(char **)(param_1 + 0x10) = pcVar5 + 1;
    uVar8 = 2;
    if (9 < (byte)(cVar1 - 0x30U)) {
LAB_18012c362:
      uVar7 = 0;
      goto LAB_18012c364;
    }
    if (pcVar5 + 1 < pcVar4) {
      cVar2 = pcVar5[1];
      *(char **)(param_1 + 0x10) = pcVar5 + 2;
      if (9 < (byte)(cVar2 - 0x30U)) goto LAB_18012c362;
      if (pcVar5 + 2 < pcVar4) {
        cVar3 = pcVar5[2];
        *(char **)(param_1 + 0x10) = pcVar5 + 3;
        uVar7 = 0;
        if ((byte)(cVar3 - 0x30U) < 10) {
          uVar7 = (uint)(byte)(cVar3 - 0x30U) +
                  (uint)(byte)(cVar2 * '\n' + 0x20) + (uint)(byte)(cVar1 - 0x30U) * 100;
          uVar6 = uVar7 & 0xff;
          uVar7 = uVar7 & 0x1f00;
          uVar8 = 0;
        }
        goto LAB_18012c364;
      }
    }
  }
  uVar7 = 0;
  uVar8 = 1;
LAB_18012c364:
  return (uVar6 | uVar7) << 0x10 | uVar8;
}


