/* FUN_180033930 @ 180033930 */

longlong FUN_180033930(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (((short)param_1[0xb] == 3) && (param_1[0xc] != 0)) {
    (**(code **)(param_1[0xc] + 0x20))(param_1[0xf],param_1[0xd],param_1[0xe]);
  }
  lVar2 = param_1[0x10];
  if (lVar2 != 0) {
    puVar1 = (undefined8 *)param_1[0x11];
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)(lVar2);
    }
    if (puVar1[1] != 0) {
      thunk_FUN_1801d3330(lVar2,puVar1[1],puVar1[2]);
    }
  }
  lVar2 = *param_1;
  if ((SBORROW8(0,lVar2)) || (lVar2 == 0)) {
    return -lVar2;
  }
  lVar2 = thunk_FUN_1801d3330(param_1[1],lVar2,1);
  return lVar2;
}


