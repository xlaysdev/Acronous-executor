/* FUN_180114cf0 @ 180114cf0 */

void FUN_180114cf0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  
  FUN_180027490();
  puVar8 = (undefined4 *)thunk_FUN_1801d32d0(0x28,8);
  if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x28);
  }
  *(undefined8 *)(puVar8 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  puVar8[4] = param_2[4];
  puVar8[5] = uVar5;
  puVar8[6] = uVar6;
  puVar8[7] = uVar7;
  *puVar8 = uVar1;
  puVar8[1] = uVar2;
  puVar8[2] = uVar3;
  puVar8[3] = uVar4;
  FUN_1801d6870(param_1,puVar8,&PTR_FUN_18023f800);
  return;
}


