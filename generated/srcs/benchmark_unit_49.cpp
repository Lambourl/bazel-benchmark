#include "bench/fib.hpp"

// RE Benchmark TU 49 of 20000 (depth=28, stamp="default")
namespace bench_tu_49 {
constexpr unsigned long long result = ::bench::slow_fib<28, 49>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_49
