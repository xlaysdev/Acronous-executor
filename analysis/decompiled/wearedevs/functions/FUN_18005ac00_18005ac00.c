/* FUN_18005ac00 @ 18005ac00 */

undefined8 FUN_18005ac00(int *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 local_130 [264];
  int *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (*param_1 == 2) {
    uVar2 = 1;
  }
  else {
    memcpy(local_130,param_1,0x108);
    local_28 = param_1 + 0x42;
    uVar2 = FUN_18004b220(local_28,local_130);
  }
  plVar1 = *(longlong **)(param_1 + 0x42);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003e300(param_1 + 0x42);
  }
  return uVar2;
}


