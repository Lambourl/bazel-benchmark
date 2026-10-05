#include "bench/fib.hpp"

// RE Benchmark TU 19074 of 20000 (depth=28, stamp="default")
namespace bench_tu_19074 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19074>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19074
