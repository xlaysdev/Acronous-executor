/* FUN_1801a8410 @ 1801a8410 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801a8410(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  byte bVar5;
  ulonglong uVar6;
  undefined1 local_1060 [4096];
  undefined1 *local_60;
  ulonglong local_58;
  byte local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar2 = param_2 - (param_2 >> 1);
  uVar6 = 2000000;
  if (param_2 < 2000000) {
    uVar6 = param_2;
  }
  if (uVar6 <= uVar2) {
    uVar6 = uVar2;
  }
  local_58 = uVar6;
  if (uVar6 < 0x401) {
    puVar3 = local_1060;
    bVar5 = 0;
    uVar6 = 0x400;
LAB_1801a84f0:
    local_60 = puVar3;
    local_49 = bVar5;
    FUN_1801a85b0(param_1,param_2,puVar3,uVar6,param_2 < 0x41,param_3);
    if ((local_58 != 0 & bVar5) != 0) {
      thunk_FUN_1801d3330(puVar3,local_58 << 2,4);
    }
    return;
  }
  uVar1 = uVar6 * 4;
  if (uVar1 < 0x7ffffffffffffffd && uVar2 >> 0x3e == 0) {
    FUN_180027490();
    uVar4 = 4;
    puVar3 = (undefined1 *)thunk_FUN_1801d32d0(uVar1,4);
    if (puVar3 != (undefined1 *)0x0) {
      bVar5 = 1;
      goto LAB_1801a84f0;
    }
  }
  else {
    uVar4 = 0;
  }
  local_49 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_18020171e(uVar4,uVar1);
}


