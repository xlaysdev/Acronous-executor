/* FUN_1801168e0 @ 1801168e0 */

undefined8 FUN_1801168e0(longlong param_1,longlong *param_2,void *param_3,size_t param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  void *_Dst;
  undefined8 *puVar4;
  longlong lVar5;
  void *local_70;
  size_t local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 *local_50;
  longlong local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (param_4 == 0) {
    return 0;
  }
  if ((*(char *)(param_1 + 0x58) == '\x02') ||
     (plVar1 = (longlong *)(param_1 + 0x48), -1 < *(longlong *)(*plVar1 + 0x38))) {
    lVar5 = *(longlong *)(param_1 + 0x38);
    if (*(char *)(lVar5 + 0x50) != '\0') goto LAB_180116a1e;
    puVar4 = *(undefined8 **)*param_2;
    lVar3 = (*(code *)*puVar4)(((undefined8 *)*param_2)[1]);
    LOCK();
    cVar2 = *(char *)(lVar5 + 0x30);
    *(char *)(lVar5 + 0x30) = '\x01';
    UNLOCK();
    if (cVar2 == '\0') {
      local_58 = lVar3;
      local_50 = puVar4;
      local_48 = lVar5;
      if (*(longlong *)(lVar5 + 0x20) != 0) {
        (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x18))(*(undefined8 *)(lVar5 + 0x28));
      }
      *(longlong *)(local_48 + 0x20) = local_58;
      *(undefined8 **)(local_48 + 0x28) = local_50;
      LOCK();
      *(undefined1 *)(local_48 + 0x30) = 0;
      UNLOCK();
      lVar5 = local_48;
      if (*(char *)(local_48 + 0x50) == '\0') {
        return 2;
      }
      goto LAB_180116a1e;
    }
  }
  else {
    cVar2 = FUN_180127fe0(plVar1);
    if (cVar2 != '\0') {
      return 2;
    }
    FUN_180027490();
    _Dst = (void *)thunk_FUN_1801d32d0(param_4,1);
    if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(1,param_4);
    }
    memcpy(_Dst,param_3,param_4);
    local_60 = 0;
    local_70 = _Dst;
    local_68 = param_4;
    cVar2 = FUN_180127810(plVar1,&local_70);
    if (cVar2 == '\x02') {
      return 0;
    }
    lVar5 = *(longlong *)(param_1 + 0x38);
    if (*(char *)(lVar5 + 0x50) != '\0') goto LAB_180116a1e;
    puVar4 = *(undefined8 **)*param_2;
    lVar3 = (*(code *)*puVar4)(((undefined8 *)*param_2)[1]);
    LOCK();
    cVar2 = *(char *)(lVar5 + 0x30);
    *(char *)(lVar5 + 0x30) = '\x01';
    UNLOCK();
    if (cVar2 == '\0') {
      local_58 = lVar3;
      local_50 = puVar4;
      local_48 = lVar5;
      if (*(longlong *)(lVar5 + 0x20) != 0) {
        (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x18))(*(undefined8 *)(lVar5 + 0x28));
      }
      *(longlong *)(local_48 + 0x20) = local_58;
      *(undefined8 **)(local_48 + 0x28) = local_50;
      LOCK();
      *(undefined1 *)(local_48 + 0x30) = 0;
      UNLOCK();
      lVar5 = local_48;
      if (*(char *)(local_48 + 0x50) == '\0') {
        return 2;
      }
      goto LAB_180116a1e;
    }
  }
  (**(code **)(lVar3 + 0x18))(puVar4);
LAB_180116a1e:
  LOCK();
  cVar2 = *(char *)(lVar5 + 0x18);
  *(char *)(lVar5 + 0x18) = '\x01';
  UNLOCK();
  if (cVar2 == '\0') {
    lVar3 = *(longlong *)(lVar5 + 0x10);
    *(undefined8 *)(lVar5 + 0x10) = 0;
    LOCK();
    *(undefined1 *)(lVar5 + 0x18) = 0;
    UNLOCK();
    if (lVar3 != 0) {
      FUN_180114c50(0x28,lVar3);
    }
  }
  return 1;
}


