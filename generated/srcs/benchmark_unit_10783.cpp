#include "bench/fib.hpp"

// RE Benchmark TU 10783 of 20000 (depth=28, stamp="default")
namespace bench_tu_10783 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10783>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10783
