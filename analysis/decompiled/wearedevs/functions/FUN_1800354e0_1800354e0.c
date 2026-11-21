/* FUN_1800354e0 @ 1800354e0 */

void FUN_1800354e0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 uVar4;
  char local_32;
  undefined1 local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1802018f0(&PTR_s_C__Users_burne__cargo_registry_s_180206860);
  }
  *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1800353f0();
    lVar2 = *(longlong *)(param_1 + 8) + 1;
  }
  uVar4 = (undefined1)lVar3;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(longlong *)(param_1 + 8) = lVar2;
  param_3 = (undefined8 *)*param_3;
  lVar3 = FUN_18016c6f0();
  if (*(char *)(lVar3 + 0x48) != '\x01') {
    if (*(char *)(lVar3 + 0x48) == '\x02') {
      cVar1 = '\x02';
      goto LAB_180035594;
    }
    FUN_1801d8880(lVar3,FUN_18002ca60);
    *(undefined1 *)(lVar3 + 0x48) = 1;
  }
  cVar1 = *(char *)(lVar3 + 0x44);
  uVar4 = *(undefined1 *)(lVar3 + 0x45);
  *(undefined2 *)(lVar3 + 0x44) = 0x8001;
LAB_180035594:
  local_32 = cVar1;
  local_31 = uVar4;
  FUN_180019fe0(*param_3,param_4);
  if (cVar1 != '\x02') {
    FUN_18016ea70(&local_32);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1802018f0(&PTR_s_C__Users_burne__cargo_registry_s_180206878);
  }
  *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
  lVar3 = *(longlong *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201b60("core missing",0xc,&PTR_s_C__Users_burne__cargo_registry_s_1802068a0);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


