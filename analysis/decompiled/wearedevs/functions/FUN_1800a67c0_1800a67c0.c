/* FUN_1800a67c0 @ 1800a67c0 */

void FUN_1800a67c0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_148 [256];
  longlong local_48;
  longlong local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_30 = param_1;
  while( true ) {
    FUN_18009c180(local_148,param_1 + 0x1a0,param_1 + 0x80);
    lVar2 = local_30;
    if (local_48 - 3U < 2) break;
    FUN_1800a5ed0(local_148);
  }
  lVar3 = *(longlong *)(local_30 + 0x1a8);
  do {
    lVar1 = *(longlong *)(lVar3 + 0x2308);
    thunk_FUN_1801d3330(lVar3,0x2320,8);
    lVar3 = lVar1;
  } while (lVar1 != 0);
  lVar3 = *(longlong *)(lVar2 + 0x100);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar2 + 0x108));
  }
  return;
}


