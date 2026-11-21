/* FUN_1801dfe00 @ 1801dfe00 */

void FUN_1801dfe00(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *local_48;
  
  uVar1 = 0;
  if (!SBORROW8(0,*param_2)) {
    uVar1 = FUN_1801d3920(param_2);
    local_48 = param_2;
  }
  lVar6 = 0x20;
  puVar2 = (undefined8 *)FUN_1801ec950(8);
  if (lVar6 == 0) {
    puVar3 = puVar2;
  }
  else {
    if (&DAT_00000010 < puVar2) {
      uVar4 = FUN_1801dc500();
      if (uVar4 != 0) {
        uVar5 = (ulonglong)((longlong)puVar2 + -1) & uVar4;
        puVar3 = (undefined8 *)((longlong)puVar2 + (uVar4 - uVar5));
        *(ulonglong *)((longlong)puVar2 + ((uVar4 - 8) - uVar5)) = uVar4;
        goto LAB_1801dfea1;
      }
      goto LAB_1801dfecd;
    }
    puVar3 = (undefined8 *)FUN_1801dc500();
  }
  if (puVar3 != (undefined8 *)0x0) {
LAB_1801dfea1:
    *puVar3 = 1;
    puVar3[1] = 1;
    puVar3[3] = uVar1;
    puVar3[4] = local_48;
    puVar3[2] = param_1;
    *(undefined1 *)(puVar3 + 5) = 0;
    return;
  }
LAB_1801dfecd:
                    /* WARNING: Subroutine does not return */
  FUN_180201705(puVar2,lVar6);
}


