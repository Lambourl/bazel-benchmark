#include "bench/fib.hpp"

// RE Benchmark TU 5892 of 20000 (depth=28, stamp="default")
namespace bench_tu_5892 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5892>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5892
