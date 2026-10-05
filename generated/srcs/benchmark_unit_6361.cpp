#include "bench/fib.hpp"

// RE Benchmark TU 6361 of 20000 (depth=28, stamp="default")
namespace bench_tu_6361 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6361>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6361
