// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_SIGMFSDRANGEL_SDRANGEL_H_
#define FLATBUFFERS_GENERATED_SIGMFSDRANGEL_SDRANGEL_H_

#include "flatbuffers/flatbuffers.h"

namespace sdrangel {

struct Global;
struct GlobalT;

struct Capture;
struct CaptureT;

struct Annotation;
struct AnnotationT;

struct Descr;
struct DescrT;

inline const flatbuffers::TypeTable *GlobalTypeTable();

inline const flatbuffers::TypeTable *CaptureTypeTable();

inline const flatbuffers::TypeTable *AnnotationTypeTable();

inline const flatbuffers::TypeTable *DescrTypeTable();

struct GlobalT : public flatbuffers::NativeTable {
  typedef Global TableType;
  GlobalT() {
  }
};

struct Global FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef GlobalT NativeTableType;
  static const flatbuffers::TypeTable *MiniReflectTypeTable() {
    return GlobalTypeTable();
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           verifier.EndTable();
  }
  GlobalT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(GlobalT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<Global> Pack(flatbuffers::FlatBufferBuilder &_fbb, const GlobalT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct GlobalBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  explicit GlobalBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  GlobalBuilder &operator=(const GlobalBuilder &);
  flatbuffers::Offset<Global> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Global>(end);
    return o;
  }
};

inline flatbuffers::Offset<Global> CreateGlobal(
    flatbuffers::FlatBufferBuilder &_fbb) {
  GlobalBuilder builder_(_fbb);
  return builder_.Finish();
}

flatbuffers::Offset<Global> CreateGlobal(flatbuffers::FlatBufferBuilder &_fbb, const GlobalT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct CaptureT : public flatbuffers::NativeTable {
  typedef Capture TableType;
  int32_t sample_rate;
  CaptureT()
      : sample_rate(0) {
  }
};

struct Capture FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef CaptureT NativeTableType;
  static const flatbuffers::TypeTable *MiniReflectTypeTable() {
    return CaptureTypeTable();
  }
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_SAMPLE_RATE = 4
  };
  int32_t sample_rate() const {
    return GetField<int32_t>(VT_SAMPLE_RATE, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_SAMPLE_RATE) &&
           verifier.EndTable();
  }
  CaptureT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(CaptureT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<Capture> Pack(flatbuffers::FlatBufferBuilder &_fbb, const CaptureT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct CaptureBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_sample_rate(int32_t sample_rate) {
    fbb_.AddElement<int32_t>(Capture::VT_SAMPLE_RATE, sample_rate, 0);
  }
  explicit CaptureBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  CaptureBuilder &operator=(const CaptureBuilder &);
  flatbuffers::Offset<Capture> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Capture>(end);
    return o;
  }
};

inline flatbuffers::Offset<Capture> CreateCapture(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t sample_rate = 0) {
  CaptureBuilder builder_(_fbb);
  builder_.add_sample_rate(sample_rate);
  return builder_.Finish();
}

flatbuffers::Offset<Capture> CreateCapture(flatbuffers::FlatBufferBuilder &_fbb, const CaptureT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct AnnotationT : public flatbuffers::NativeTable {
  typedef Annotation TableType;
  AnnotationT() {
  }
};

struct Annotation FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef AnnotationT NativeTableType;
  static const flatbuffers::TypeTable *MiniReflectTypeTable() {
    return AnnotationTypeTable();
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           verifier.EndTable();
  }
  AnnotationT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(AnnotationT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<Annotation> Pack(flatbuffers::FlatBufferBuilder &_fbb, const AnnotationT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct AnnotationBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  explicit AnnotationBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  AnnotationBuilder &operator=(const AnnotationBuilder &);
  flatbuffers::Offset<Annotation> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Annotation>(end);
    return o;
  }
};

inline flatbuffers::Offset<Annotation> CreateAnnotation(
    flatbuffers::FlatBufferBuilder &_fbb) {
  AnnotationBuilder builder_(_fbb);
  return builder_.Finish();
}

flatbuffers::Offset<Annotation> CreateAnnotation(flatbuffers::FlatBufferBuilder &_fbb, const AnnotationT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct DescrT : public flatbuffers::NativeTable {
  typedef Descr TableType;
  std::unique_ptr<GlobalT> global;
  std::unique_ptr<AnnotationT> annotation;
  std::unique_ptr<CaptureT> capture;
  DescrT() {
  }
};

struct Descr FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef DescrT NativeTableType;
  static const flatbuffers::TypeTable *MiniReflectTypeTable() {
    return DescrTypeTable();
  }
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_GLOBAL = 4,
    VT_ANNOTATION = 6,
    VT_CAPTURE = 8
  };
  const Global *global() const {
    return GetPointer<const Global *>(VT_GLOBAL);
  }
  const Annotation *annotation() const {
    return GetPointer<const Annotation *>(VT_ANNOTATION);
  }
  const Capture *capture() const {
    return GetPointer<const Capture *>(VT_CAPTURE);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_GLOBAL) &&
           verifier.VerifyTable(global()) &&
           VerifyOffset(verifier, VT_ANNOTATION) &&
           verifier.VerifyTable(annotation()) &&
           VerifyOffset(verifier, VT_CAPTURE) &&
           verifier.VerifyTable(capture()) &&
           verifier.EndTable();
  }
  DescrT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(DescrT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<Descr> Pack(flatbuffers::FlatBufferBuilder &_fbb, const DescrT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct DescrBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_global(flatbuffers::Offset<Global> global) {
    fbb_.AddOffset(Descr::VT_GLOBAL, global);
  }
  void add_annotation(flatbuffers::Offset<Annotation> annotation) {
    fbb_.AddOffset(Descr::VT_ANNOTATION, annotation);
  }
  void add_capture(flatbuffers::Offset<Capture> capture) {
    fbb_.AddOffset(Descr::VT_CAPTURE, capture);
  }
  explicit DescrBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  DescrBuilder &operator=(const DescrBuilder &);
  flatbuffers::Offset<Descr> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Descr>(end);
    return o;
  }
};

inline flatbuffers::Offset<Descr> CreateDescr(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<Global> global = 0,
    flatbuffers::Offset<Annotation> annotation = 0,
    flatbuffers::Offset<Capture> capture = 0) {
  DescrBuilder builder_(_fbb);
  builder_.add_capture(capture);
  builder_.add_annotation(annotation);
  builder_.add_global(global);
  return builder_.Finish();
}

flatbuffers::Offset<Descr> CreateDescr(flatbuffers::FlatBufferBuilder &_fbb, const DescrT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

inline GlobalT *Global::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = new GlobalT();
  UnPackTo(_o, _resolver);
  return _o;
}

inline void Global::UnPackTo(GlobalT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
}

inline flatbuffers::Offset<Global> Global::Pack(flatbuffers::FlatBufferBuilder &_fbb, const GlobalT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateGlobal(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<Global> CreateGlobal(flatbuffers::FlatBufferBuilder &_fbb, const GlobalT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const GlobalT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  return sdrangel::CreateGlobal(
      _fbb);
}

inline CaptureT *Capture::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = new CaptureT();
  UnPackTo(_o, _resolver);
  return _o;
}

inline void Capture::UnPackTo(CaptureT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = sample_rate(); _o->sample_rate = _e; };
}

inline flatbuffers::Offset<Capture> Capture::Pack(flatbuffers::FlatBufferBuilder &_fbb, const CaptureT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateCapture(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<Capture> CreateCapture(flatbuffers::FlatBufferBuilder &_fbb, const CaptureT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const CaptureT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _sample_rate = _o->sample_rate;
  return sdrangel::CreateCapture(
      _fbb,
      _sample_rate);
}

inline AnnotationT *Annotation::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = new AnnotationT();
  UnPackTo(_o, _resolver);
  return _o;
}

inline void Annotation::UnPackTo(AnnotationT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
}

inline flatbuffers::Offset<Annotation> Annotation::Pack(flatbuffers::FlatBufferBuilder &_fbb, const AnnotationT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateAnnotation(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<Annotation> CreateAnnotation(flatbuffers::FlatBufferBuilder &_fbb, const AnnotationT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const AnnotationT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  return sdrangel::CreateAnnotation(
      _fbb);
}

inline DescrT *Descr::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = new DescrT();
  UnPackTo(_o, _resolver);
  return _o;
}

inline void Descr::UnPackTo(DescrT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = global(); if (_e) _o->global = std::unique_ptr<GlobalT>(_e->UnPack(_resolver)); };
  { auto _e = annotation(); if (_e) _o->annotation = std::unique_ptr<AnnotationT>(_e->UnPack(_resolver)); };
  { auto _e = capture(); if (_e) _o->capture = std::unique_ptr<CaptureT>(_e->UnPack(_resolver)); };
}

inline flatbuffers::Offset<Descr> Descr::Pack(flatbuffers::FlatBufferBuilder &_fbb, const DescrT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateDescr(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<Descr> CreateDescr(flatbuffers::FlatBufferBuilder &_fbb, const DescrT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const DescrT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _global = _o->global ? CreateGlobal(_fbb, _o->global.get(), _rehasher) : 0;
  auto _annotation = _o->annotation ? CreateAnnotation(_fbb, _o->annotation.get(), _rehasher) : 0;
  auto _capture = _o->capture ? CreateCapture(_fbb, _o->capture.get(), _rehasher) : 0;
  return sdrangel::CreateDescr(
      _fbb,
      _global,
      _annotation,
      _capture);
}

inline const flatbuffers::TypeTable *GlobalTypeTable() {
  static const flatbuffers::TypeTable tt = {
    flatbuffers::ST_TABLE, 0, nullptr, nullptr, nullptr, nullptr
  };
  return &tt;
}

inline const flatbuffers::TypeTable *CaptureTypeTable() {
  static const flatbuffers::TypeCode type_codes[] = {
    { flatbuffers::ET_INT, 0, -1 }
  };
  static const char * const names[] = {
    "sample_rate"
  };
  static const flatbuffers::TypeTable tt = {
    flatbuffers::ST_TABLE, 1, type_codes, nullptr, nullptr, names
  };
  return &tt;
}

inline const flatbuffers::TypeTable *AnnotationTypeTable() {
  static const flatbuffers::TypeTable tt = {
    flatbuffers::ST_TABLE, 0, nullptr, nullptr, nullptr, nullptr
  };
  return &tt;
}

inline const flatbuffers::TypeTable *DescrTypeTable() {
  static const flatbuffers::TypeCode type_codes[] = {
    { flatbuffers::ET_SEQUENCE, 0, 0 },
    { flatbuffers::ET_SEQUENCE, 0, 1 },
    { flatbuffers::ET_SEQUENCE, 0, 2 }
  };
  static const flatbuffers::TypeFunction type_refs[] = {
    GlobalTypeTable,
    AnnotationTypeTable,
    CaptureTypeTable
  };
  static const char * const names[] = {
    "global",
    "annotation",
    "capture"
  };
  static const flatbuffers::TypeTable tt = {
    flatbuffers::ST_TABLE, 3, type_codes, type_refs, nullptr, names
  };
  return &tt;
}

}  // namespace sdrangel

#endif  // FLATBUFFERS_GENERATED_SIGMFSDRANGEL_SDRANGEL_H_
