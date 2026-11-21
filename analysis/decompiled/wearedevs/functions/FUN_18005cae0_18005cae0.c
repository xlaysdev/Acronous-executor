/* FUN_18005cae0 @ 18005cae0 */

void * FUN_18005cae0(void *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_e8 [152];
  longlong local_50;
  undefined8 local_48;
  undefined1 local_39;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_48 = *param_2;
  local_50 = param_2[1];
  local_39 = 1;
  cVar2 = (**(code **)(local_50 + 0x38))();
  uVar1 = param_2[2];
  FUN_18014c080(local_e8);
  FUN_180027490();
  lVar3 = thunk_FUN_1801d32d0(0x4000,1);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(1,0x4000);
  }
  lVar4 = 0x400;
  if (cVar2 != '\0') {
    lVar4 = 0x100;
  }
  memcpy(param_1,local_e8,0x98);
  *(undefined8 *)((longlong)param_1 + 0x168) = local_48;
  *(longlong *)((longlong)param_1 + 0x170) = local_50;
  *(undefined8 *)((longlong)param_1 + 0x178) = uVar1;
  *(undefined1 *)((longlong)param_1 + 0x180) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 3;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 4;
  *(longlong *)((longlong)param_1 + 0x128) = lVar3;
  *(undefined8 *)((longlong)param_1 + 0x130) = 0;
  *(undefined8 *)((longlong)param_1 + 0x138) = 0x4000;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0x15;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(longlong *)((longlong)param_1 + 0x150) = lVar4;
  *(longlong *)((longlong)param_1 + 0x158) = lVar4 + 9;
  *(undefined4 *)((longlong)param_1 + 0x160) = 0x4000;
  return param_1;
}


