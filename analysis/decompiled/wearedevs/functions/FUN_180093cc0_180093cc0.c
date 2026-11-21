/* FUN_180093cc0 @ 180093cc0 */

void * FUN_180093cc0(void *param_1,longlong param_2,void *param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 *_Dst;
  undefined8 uVar4;
  longlong *in_R11;
  undefined1 local_518 [424];
  undefined1 local_370 [424];
  ulonglong local_1c8;
  longlong *plStack_1c0;
  undefined8 local_1b8;
  longlong *plStack_1b0;
  longlong *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190 [32];
  ulonglong local_90;
  longlong *plStack_88;
  undefined8 local_80;
  longlong *plStack_78;
  longlong *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  void *local_50;
  undefined1 *local_48;
  undefined8 local_40;
  undefined1 local_32;
  undefined1 local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_31 = 1;
  local_50 = param_3;
  FUN_180083c70(local_190,(ulonglong *)(param_2 + 0x1a8));
  _Dst = local_370;
  uVar4 = 0x100;
  memcpy(_Dst,local_50,0x100);
  local_32 = 1;
  uVar3 = FUN_18003fb30(param_2);
  plStack_78 = *(longlong **)(param_2 + 0x1c0);
  if (plStack_78 != (longlong *)0x0) {
    LOCK();
    lVar1 = *plStack_78;
    *plStack_78 = *plStack_78 + 1;
    UNLOCK();
    if (*plStack_78 == 0 || SCARRY8(lVar1,1) != *plStack_78 < 0) goto LAB_180093e9e;
  }
  local_90 = *(ulonglong *)(param_2 + 0x1a8);
  if (1 < local_90) {
    in_R11 = *(longlong **)(param_2 + 0x1b0);
    LOCK();
    lVar1 = *in_R11;
    *in_R11 = *in_R11 + 1;
    UNLOCK();
    if (*in_R11 == 0 || SCARRY8(lVar1,1) != *in_R11 < 0) goto LAB_180093e9e;
    uVar4 = *(undefined8 *)(param_2 + 0x1b8);
  }
  local_60 = *(undefined8 *)(param_2 + 0x1d8);
  local_70 = *(longlong **)(param_2 + 0x1c8);
  local_58 = local_190[0];
  local_48 = _Dst;
  local_40 = uVar3;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    lVar1 = *local_70;
    *local_70 = *local_70 + 1;
    UNLOCK();
    if (*local_70 == 0 || SCARRY8(lVar1,1) != *local_70 < 0) {
LAB_180093e9e:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    local_190[0] = *(undefined8 *)(param_2 + 0x1d0);
  }
  plStack_88 = in_R11;
  local_80 = uVar4;
  uStack_68 = local_190[0];
  FUN_1800e5640(local_518,param_2);
  local_198 = local_60;
  local_1a8 = local_70;
  uStack_1a0 = uStack_68;
  local_1b8 = local_80;
  plStack_1b0 = plStack_78;
  local_1c8 = local_90;
  plStack_1c0 = plStack_88;
  memcpy(local_370,local_518,0x1a8);
  memcpy((void *)((longlong)param_1 + 0x1e0),local_190,0x100);
  memcpy(param_1,local_370,0x1e0);
  *(undefined1 *)((longlong)param_1 + 0x2e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e8) = local_40;
  *(undefined1 **)((longlong)param_1 + 0x2f0) = local_48;
  return param_1;
}


