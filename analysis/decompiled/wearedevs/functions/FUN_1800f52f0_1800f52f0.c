/* FUN_1800f52f0 @ 1800f52f0 */

undefined8 FUN_1800f52f0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  *(undefined8 *)(param_1 + 0x38) = param_2;
  uVar5 = param_3[1];
  uVar1 = param_3[2];
  uVar7 = param_3[3];
  if (uVar7 <= uVar5 && uVar5 - uVar7 != 0) {
    memset((void *)(uVar7 + *param_3),0,uVar5 - uVar7);
    param_3[3] = uVar5;
    uVar7 = uVar5;
  }
  if (uVar5 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_180201a30(uVar1,uVar5,uVar5,&PTR_s_C__Users_burne__cargo_registry_s_180216b90);
  }
  uVar6 = *param_3 + uVar1;
  uVar5 = FUN_1800bab90(param_1,uVar6,uVar5 - uVar1);
  if ((uVar5 & 1) == 0) {
    if (CARRY8(uVar1,uVar6)) {
                    /* WARNING: Subroutine does not return */
      FUN_180201b60("filled overflowC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.53.1\\src\\net\\tcp\\socket.rs"
                    ,0xf,&PTR_s_C__Users_burne__cargo_registry_s_180216ba8);
    }
    if (uVar7 < uVar1 + uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0("filled must not become larger than initialized",0x5d,
                    &PTR_s_C__Users_burne__cargo_registry_s_180216ba8);
    }
    param_3[2] = uVar1 + uVar6;
  }
  else if (uVar6 != 0) {
    cVar4 = FUN_1800ed360(uVar6);
    *(undefined8 *)(param_1 + 0x38) = 0;
    if (cVar4 != '\r') {
      return 0;
    }
    if (((uint)uVar6 & 3) != 1) {
      return 1;
    }
    uVar2 = *(undefined8 *)(uVar6 - 1);
    puVar3 = *(undefined8 **)(uVar6 + 7);
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)(uVar2);
    }
    if (puVar3[1] != 0) {
      thunk_FUN_1801d3330(uVar2,puVar3[1],puVar3[2]);
    }
    thunk_FUN_1801d3330(uVar6 - 1,0x18,8);
    return 1;
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0;
}


