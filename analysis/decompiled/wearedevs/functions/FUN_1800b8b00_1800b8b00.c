/* FUN_1800b8b00 @ 1800b8b00 */

void FUN_1800b8b00(void *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong _Size;
  longlong lVar3;
  undefined1 local_21;
  
  if ((*(char *)((longlong)param_1 + 0x423) == '\0') &&
     (plVar1 = *(longlong **)((longlong)param_1 + 0x400), plVar1 != (longlong *)0x0)) {
    _Size = *(ulonglong *)((longlong)param_1 + 0x410);
    if (_Size != 0) {
      *(undefined1 *)((longlong)param_1 + 0x423) = 1;
      if (0x400 < _Size) goto LAB_1800b8c4a;
      lVar3 = plVar1[2];
      if ((ulonglong)(*plVar1 - lVar3) < _Size) {
        FUN_1801f6a80(plVar1,lVar3,_Size,1,1);
        lVar3 = plVar1[2];
      }
      memcpy((void *)(plVar1[1] + lVar3),param_1,_Size);
      plVar1[2] = lVar3 + _Size;
      *(undefined1 *)((longlong)param_1 + 0x423) = 0;
      *(undefined8 *)((longlong)param_1 + 0x410) = 0;
    }
    uVar2 = *(ulonglong *)((longlong)param_1 + 0x408);
    if (uVar2 != 0) {
      if (3 < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_180201a30(0,uVar2,3,&PTR_s_C__Users_burne__cargo_registry_s_180211ce8);
      }
      _Size = (longlong)param_1 + 0x420;
      uVar2 = FUN_1800901f0(*(undefined8 *)((longlong)param_1 + 0x418),_Size,uVar2,param_1,0x400);
      if ((uVar2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201bc0("buffer is large enough",0x16,&local_21,&DAT_180211668,
                      &PTR_s_C__Users_burne__cargo_registry_s_180211cd0);
      }
      *(ulonglong *)((longlong)param_1 + 0x410) = _Size;
      if (_Size != 0) {
        *(undefined1 *)((longlong)param_1 + 0x423) = 1;
        plVar1 = *(longlong **)((longlong)param_1 + 0x400);
        if (plVar1 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_180201b60("Writer must be present",0x16,
                        &PTR_s_C__Users_burne__cargo_registry_s_180211c88);
        }
        if (0x400 < _Size) {
LAB_1800b8c4a:
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(0,_Size,0x400,&PTR_s_C__Users_burne__cargo_registry_s_180211ca0);
        }
        lVar3 = plVar1[2];
        if ((ulonglong)(*plVar1 - lVar3) < _Size) {
          FUN_1801f6a80(plVar1,lVar3,_Size,1,1);
          lVar3 = plVar1[2];
        }
        memcpy((void *)(plVar1[1] + lVar3),param_1,_Size);
        plVar1[2] = _Size + lVar3;
        *(undefined1 *)((longlong)param_1 + 0x423) = 0;
        *(undefined8 *)((longlong)param_1 + 0x410) = 0;
      }
      *(undefined8 *)((longlong)param_1 + 0x408) = 0;
    }
  }
  return;
}


