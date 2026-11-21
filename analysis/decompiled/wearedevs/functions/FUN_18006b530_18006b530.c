/* FUN_18006b530 @ 18006b530 */

longlong * FUN_18006b530(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *_Dst;
  undefined8 local_b8 [11];
  undefined2 local_60;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_60 = 2;
  local_b8[0] = 0x8000000000000000;
  local_38 = param_1;
  local_30 = param_2;
  FUN_180027490();
  _Dst = (longlong *)thunk_FUN_1801d32d0(0x90,8);
  if (_Dst == (longlong *)0x0) {
    local_28 = param_3;
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x90);
  }
  memcpy(_Dst,local_b8,0x90);
  lVar1 = *_Dst;
  if ((!SBORROW8(0,lVar1)) && (lVar1 != 0)) {
    thunk_FUN_1801d3330(_Dst[1],lVar1,1);
  }
  _Dst[10] = param_3[10];
  lVar1 = param_3[9];
  _Dst[8] = param_3[8];
  _Dst[9] = lVar1;
  lVar1 = *param_3;
  lVar2 = param_3[1];
  lVar3 = param_3[2];
  lVar4 = param_3[3];
  lVar5 = param_3[4];
  lVar6 = param_3[5];
  lVar7 = param_3[7];
  _Dst[6] = param_3[6];
  _Dst[7] = lVar7;
  _Dst[4] = lVar5;
  _Dst[5] = lVar6;
  _Dst[2] = lVar3;
  _Dst[3] = lVar4;
  *_Dst = lVar1;
  _Dst[1] = lVar2;
  return _Dst;
}


