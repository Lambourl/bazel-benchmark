#include "bench/fib.hpp"

// RE Benchmark TU 15721 of 20000 (depth=28, stamp="default")
namespace bench_tu_15721 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15721>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15721
