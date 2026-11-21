/* FUN_18019e0d0 @ 18019e0d0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_18019e0d0(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 local_1060 [4096];
  undefined1 *local_60;
  ulonglong local_58;
  char local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar1 = param_2 - (param_2 >> 1);
  uVar5 = 500000;
  if (param_2 < 500000) {
    uVar5 = param_2;
  }
  if (uVar5 <= uVar1) {
    uVar5 = uVar1;
  }
  uVar6 = 0x30;
  if (0x30 < uVar5) {
    uVar6 = uVar5;
  }
  local_58 = uVar6;
  if (uVar5 < 0x101) {
    puVar2 = local_1060;
    cVar4 = '\0';
    uVar6 = 0x100;
LAB_18019e1bd:
    local_60 = puVar2;
    local_49 = cVar4;
    FUN_18019e320(param_1,param_2,puVar2,uVar6,param_2 < 0x41,param_3);
    if (cVar4 != '\0') {
      thunk_FUN_1801d3330(puVar2,local_58 << 4,8);
    }
    return;
  }
  uVar5 = uVar6 * 0x10;
  if (uVar5 < 0x7ffffffffffffff9 && uVar1 >> 0x3c == 0) {
    FUN_180027490();
    uVar3 = 8;
    puVar2 = (undefined1 *)thunk_FUN_1801d32d0(uVar5,8);
    if (puVar2 != (undefined1 *)0x0) {
      cVar4 = '\x01';
      goto LAB_18019e1bd;
    }
  }
  else {
    uVar3 = 0;
  }
  local_49 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_18020171e(uVar3,uVar5);
}


