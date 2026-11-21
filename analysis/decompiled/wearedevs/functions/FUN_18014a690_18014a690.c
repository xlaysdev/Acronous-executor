/* FUN_18014a690 @ 18014a690 */

void FUN_18014a690(int *param_1,longlong param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 local_110 [2];
  undefined1 local_100 [232];
  
  memcpy(local_100,param_3,0xe8);
  local_110[0] = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  FUN_18015fbf0(param_2,uVar1,local_110);
  if (*param_1 != 1) {
    param_1[0] = 1;
    param_1[1] = 0;
    *(undefined8 *)(param_1 + 2) = uVar1;
LAB_18014a70e:
    *(undefined8 *)(param_1 + 4) = uVar1;
    return;
  }
  if (*(ulonglong *)(param_1 + 4) < *(ulonglong *)(param_2 + 0x10)) {
    lVar3 = *(ulonglong *)(param_1 + 4) * 0xf8;
    if (*(int *)(*(longlong *)(param_2 + 8) + lVar3) != 2) {
      puVar2 = (undefined8 *)(*(longlong *)(param_2 + 8) + lVar3);
      *puVar2 = 1;
      puVar2[1] = uVar1;
      goto LAB_18014a70e;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_180201ec0("invalid key",0xb,&PTR_s_C__Users_burne__cargo_registry_s_180254fe8);
}


