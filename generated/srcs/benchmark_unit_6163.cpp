#include "bench/fib.hpp"

// RE Benchmark TU 6163 of 20000 (depth=28, stamp="default")
namespace bench_tu_6163 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6163>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6163
