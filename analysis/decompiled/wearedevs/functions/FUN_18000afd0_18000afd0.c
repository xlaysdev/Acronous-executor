/* FUN_18000afd0 @ 18000afd0 */

void FUN_18000afd0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (((short)param_1[0xb] == 3) && (param_1[0xc] != 0)) {
    (**(code **)(param_1[0xc] + 0x20))(param_1[0xf],param_1[0xd],param_1[0xe]);
  }
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)param_1[0x11];
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(lVar1);
    }
    if (puVar2[1] != 0) {
      thunk_FUN_1801d3330(lVar1,puVar2[1],puVar2[2]);
    }
  }
  lVar1 = *param_1;
  if ((!SBORROW8(0,lVar1)) && (lVar1 != 0)) {
    thunk_FUN_1801d3330(param_1[1],lVar1,1);
  }
  thunk_FUN_1801d3330(param_1,0x90,8);
  return;
}


