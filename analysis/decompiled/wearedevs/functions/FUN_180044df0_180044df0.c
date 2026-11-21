/* FUN_180044df0 @ 180044df0 */

undefined8 FUN_180044df0(ulonglong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar3 = 1;
  if ((param_1 & 1) != 0) {
    return uVar3;
  }
  uVar4 = (ulonglong)*(uint *)(param_3 + 0x2c);
  if (uVar4 != 0) {
    piVar1 = *(int **)(param_3 + 8);
    uVar2 = *(ulonglong *)(param_3 + 0x10);
    if (uVar4 < uVar2) {
      if (*(char *)((longlong)piVar1 + uVar4) < -0x40) {
LAB_180044e1e:
                    /* WARNING: Subroutine does not return */
        FUN_1802018d0(piVar1,uVar2,0,uVar4,&PTR_s_C__Users_burne__cargo_registry_s_180208600);
      }
    }
    else if (uVar2 != uVar4) goto LAB_180044e1e;
    switch(*(uint *)(param_3 + 0x2c)) {
    case 2:
      if ((short)*piVar1 == 0x7377) {
        return uVar3;
      }
      break;
    case 3:
      if (*(char *)((longlong)piVar1 + 2) == 's' && (short)*piVar1 == 0x7377) {
        return uVar3;
      }
      if (*(char *)((longlong)piVar1 + 2) == 'p' && (short)*piVar1 == 0x7466) {
        return uVar3;
      }
      break;
    case 4:
      if (*piVar1 == 0x70747468) {
        return uVar3;
      }
      break;
    case 5:
      if ((char)piVar1[1] == 's' && *piVar1 == 0x70747468) {
        return uVar3;
      }
    }
  }
  return 0;
}


