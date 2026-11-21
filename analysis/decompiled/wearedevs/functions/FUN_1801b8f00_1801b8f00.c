/* FUN_1801b8f00 @ 1801b8f00 */

undefined8 FUN_1801b8f00(undefined8 param_1,ulonglong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  uVar1 = param_2[2];
  uVar2 = param_2[2];
  local_58 = (undefined4)*param_2;
  uStack_54 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_50 = (undefined4)param_2[1];
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar3 = param_2[1];
  puVar5 = &local_58;
  uVar6 = 0;
  local_48 = 0;
  if (*param_2 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: vec.capacity() - start >= len",0x2f,
                  &PTR_s_C__Users_burne__cargo_registry_s_1802868a0);
  }
  uVar7 = uVar2;
  uVar8 = uVar2;
  uVar4 = FUN_1801c1690();
  FUN_1801b8c90(param_1,uVar1,0,uVar4,1,uVar3,uVar2,param_3,puVar5,uVar6,uVar7,uVar8);
  if (local_48 == uVar2 || uVar2 == 0) {
    local_48 = 0;
  }
  if (CONCAT44(uStack_54,local_58) != 0) {
    thunk_FUN_1801d3330(CONCAT44(uStack_4c,uStack_50),CONCAT44(uStack_54,local_58) << 3,8);
  }
  return param_1;
}


