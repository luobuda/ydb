#pragma once

#include <util/stream/output.h>
#include <util/generic/fwd.h>
#include <contrib/libs/protobuf/src/google/protobuf/map.h>

namespace NKikimr::NKqp {
    
    struct TUserRequestContext : public TAtomicRefCount<TUserRequestContext> {
        TString TraceId;
        TString Database;
        TString SessionId;

        TUserRequestContext() = default;

        TUserRequestContext(const TString& traceId, const TString& database, const TString& sessionId)
            : TraceId(traceId)
            , Database(database)
            , SessionId(sessionId) {}


        void Out(IOutputStream& o) const;
    };

    void SerializeCtxToMap(const TUserRequestContext& ctx, google::protobuf::Map<TString, TString>& resultMap);
}

template<>
inline void Out<NKikimr::NKqp::TUserRequestContext>(IOutputStream& o, const NKikimr::NKqp::TUserRequestContext &x) {
    return x.Out(o);
}
