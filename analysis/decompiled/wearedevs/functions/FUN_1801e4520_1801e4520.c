/* FUN_1801e4520 @ 1801e4520 */

ulonglong FUN_1801e4520(longlong *param_1,void *param_2,size_t param_3,undefined8 param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  void *pvVar3;
  longlong lVar4;
  ulonglong _Size;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  uVar8 = 0xfffffffffffffffe;
  lVar4 = *param_1;
  if (*(longlong *)(lVar4 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1802018f0(&DAT_180290e48);
  }
  *(undefined8 *)(lVar4 + 0x10) = 0xffffffffffffffff;
  pvVar3 = param_2;
  uVar2 = FUN_1801f3060(10);
  plVar1 = (longlong *)(lVar4 + 0x18);
  if ((uVar2 & 1) == 0) {
    lVar5 = *(longlong *)(lVar4 + 0x28);
    if (lVar5 == 0) {
      lVar5 = 0;
LAB_1801e460d:
      uVar2 = *plVar1 - lVar5;
    }
    else {
      if (*(char *)(*(longlong *)(lVar4 + 0x20) + -1 + lVar5) != '\n') goto LAB_1801e460d;
      uVar2 = FUN_1801d74c0(plVar1);
      if (uVar2 != 0) goto LAB_1801e46ee;
      lVar5 = *(longlong *)(lVar4 + 0x28);
      uVar2 = *plVar1 - lVar5;
    }
    if (uVar2 <= param_3) {
      uVar2 = FUN_1801ffd80(plVar1,param_2,param_3,param_4,lVar4,uVar8);
      goto LAB_1801e46ee;
    }
  }
  else {
    _Size = (longlong)pvVar3 + 1;
    bVar6 = param_3 < _Size;
    param_3 = param_3 - _Size;
    if (bVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0("mid > len",0x13,&PTR_s_library_std_src_io_buffered_line_180291398);
    }
    lVar5 = *(longlong *)(lVar4 + 0x28);
    if (lVar5 == 0) {
      uVar2 = FUN_1801d5fb0(lVar4 + 0x31,param_2,_Size);
      if (!(uVar2 == 0 || (uVar2 & 0xffffffff00000003) == 0x600000002)) goto LAB_1801e46ee;
    }
    else {
      if (_Size < (ulonglong)(*plVar1 - lVar5)) {
        lVar7 = lVar4;
        memcpy((void *)(*(longlong *)(lVar4 + 0x20) + lVar5),param_2,_Size);
        *(ulonglong *)(lVar4 + 0x28) = lVar5 + _Size;
        lVar4 = lVar7;
      }
      else {
        uVar2 = FUN_1801ffd80(plVar1,param_2,_Size,param_4,lVar4,uVar8);
        if (uVar2 != 0) goto LAB_1801e46ee;
      }
      uVar2 = FUN_1801d74c0(plVar1);
      if (uVar2 != 0) goto LAB_1801e46ee;
    }
    param_2 = (void *)((longlong)param_2 + _Size);
    lVar5 = *(longlong *)(lVar4 + 0x28);
    if ((ulonglong)(*(longlong *)(lVar4 + 0x18) - lVar5) <= param_3) {
      uVar2 = FUN_1801ffd80(plVar1,param_2,param_3,param_4,lVar4,uVar8);
      goto LAB_1801e46ee;
    }
  }
  memcpy((void *)(*(longlong *)(lVar4 + 0x20) + lVar5),param_2,param_3);
  *(size_t *)(lVar4 + 0x28) = lVar5 + param_3;
  uVar2 = 0;
LAB_1801e46ee:
  *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 1;
  return uVar2;
}


