#include "bench/fib.hpp"

// RE Benchmark TU 6970 of 20000 (depth=28, stamp="default")
namespace bench_tu_6970 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6970>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6970
