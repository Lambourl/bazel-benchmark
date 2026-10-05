#include "bench/fib.hpp"

// RE Benchmark TU 19199 of 20000 (depth=28, stamp="default")
namespace bench_tu_19199 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19199>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19199
